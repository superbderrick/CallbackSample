package sample.callbacksample.Thermometer;

public class Heater {
private boolean mIsHeaterTurnedOn = false;
	
	public void setHeaterOn(boolean on) {
		mIsHeaterTurnedOn = on;
	}
	
	public boolean isHeaterTurnedOn() {
		return mIsHeaterTurnedOn;
	}
	
	public Thermometer.OnTemperatureChangeListener getOnTemperatureChageListener() {
		return mOnTemperatureChangeListener;
	}
	
	private Thermometer.OnTemperatureChangeListener mOnTemperatureChangeListener = 
			new Thermometer.OnTemperatureChangeListener() {				
				@Override
				public void onTemperatureChanged(int temperature) {
					if(temperature < 0) {
						System.out.println("Now, the temperature is under 0 celsius. So I will turn on the heater.");
						mIsHeaterTurnedOn = true;
					} else { 
						System.out.println("The current temperature is greater than 0 celcius. I will turn the heater off.");
						mIsHeaterTurnedOn = false;
					}
				}
			};

}
