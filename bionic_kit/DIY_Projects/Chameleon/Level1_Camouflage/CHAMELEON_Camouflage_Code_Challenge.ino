// LED2 (built-in ESP32)
// GPIO

// RGB LED
// GPIO

// color sensor
// GPIO
// define pin for TTL level square wave
// define frequency scaling (S1 = 0)
// define color array (S2 not defined, because for red and blue color detection it must be LOW (not connected))
// define variable for each color frequency (red, green, blue)
// define a lower and upper treshold of the color sensor

// global variables

void setup()
{
  // setup LED2 as OUTPUT

  // setup LED_RGB as OUTPUT

  // setup color sensor
  // setup frequency scaling
  // set frequency scaling to 20% (S1 = LOW, not connected)
  // setup color array (S2 not defined)

  // setup the serial communication
  Serial.begin(9600);
}

void loop()
{
  // set sensor to read RED color only (S2 = LOW because it's not connected)
  // write the pulse width of the sensor signal into the red_frequency variable
  // set sensor to read BLUE color only (S2 = LOW because it's not connected)
  // write the pulse width of the sensor signal into the blue_frequency variable
  // print RGB values in the serial monitor
  // write the detected color in the serial monitor

  // flash the red LED (LED2)
  // flash the blue LED (RGB_LED)
}