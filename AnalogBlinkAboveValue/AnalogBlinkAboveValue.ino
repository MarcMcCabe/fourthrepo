/*
  AnalogReadSerial

  Reads an analog input on pin 0, prints the result to the Serial Monitor.
  Graphical representation is available using Serial Plotter (Tools > Serial Plotter menu).
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/AnalogReadSerial

  modified 12/02/2021
  by Marc McCabe

  also using elements of button sketch
  created 2005
  by DojoDave <http://www.0j0.org>
  modified 30 Aug 2011
  by Tom Igoe
  
*/

const int ledPin =  13;      // the number of the LED pin

// the setup routine runs once when you press reset:
void setup() {
  
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);

    // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);

  if (sensorValue > 500) { //blink LED in Digital Pin 3 if the value reading in Pin A0 goes above 500
    // turn LED on and off:
    digitalWrite(ledPin, HIGH);
    digitalWrite(ledPin, LOW);
  }else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
  }
  
  // print out the value you read:
  Serial.println(sensorValue);
  
  delay(1);        // delay in between reads for stability
}
