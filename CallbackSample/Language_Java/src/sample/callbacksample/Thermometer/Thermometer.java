package sample.callbacksample.Thermometer;

public class Thermometer {
	private int [] mTemperatures = { 30, 20, 22, 18, 18, 15, 10, -5, 5, 8, 0, -1 };
	private int mTemperature;
	private OnTemperatureChangeListener mListener;
	
	public void setTemperature(int temperature) {
		mTemperature = temperature;
	}
	
	public int getTemperature() {
		return mTemperature;
	}
	
	public void setListener(OnTemperatureChangeListener listener){
		mListener = listener;
	}
	
	public OnTemperatureChangeListener getListener() {
		return mListener;
	}
	
	public interface OnTemperatureChangeListener {
		public void onTemperatureChanged(int temperature);
	}
	
	public void simulate() {
		Thread thread = new Thread() {
			public void run() {
				for(int i = 0; i < mTemperatures.length; i++) {
					setTemperature(mTemperatures[i]);
					System.out.println("The current temperature : " + getTemperature());
					
					if(mListener != null)
						mListener.onTemperatureChanged(getTemperature());
					try {
						Thread.sleep(500);
					} catch(Exception e) {
						System.out.println("" + e.getMessage());
					}
				}				
			}
		};
		thread.start();
	}

}
