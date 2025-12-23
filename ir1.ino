#define IR_sensor 7
#define INVERT_LOGIC 1

void setup() {
  pinMode(IR_sensor, INPUT); //set the sensor pin as input
  Serial.begin(9600); // set the baud rate for serial monitor as 9600


}

void loop() {
  int data = digitalRead(IR_sensor);
  if (!IR_sensor) {
    data = !data;
  }
  if (data == 0) { // if the signal indicates an object is detected
    Serial.println ("The object has been detected!"); //Print message to Serial Monitor
  } else {
    Serial.println ("The object has not been detected!");
  }
  delay (1000);

}
