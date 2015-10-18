package sample.callbacksample.Thermometer;

public class Main {
	
	public static void main(String[] args) {
		start();
	}
	
	private static void start()
	{
		Thermometer thermometer = new Thermometer();
		Heater heater = new Heater();
		
		thermometer.setListener(heater.getOnTemperatureChageListener());
		thermometer.simulate();
	};
}


