/*WEC WE Bots Workshop Demo #1
Arduino program blinks LED connected to pin 13
*/

int buttonState = 0;

void setup()
{
  pinMode(13,OUTPUT);
  pinMode(2, INPUT);
}

void loop()
{
  /* // Tutorial Part A: time-dependent blinking
  // Turn the LED ON
  digitalWrite(13, HIGH);
  
  // Wait
  delay(3000);
  
  // Turn the LED OFF
  digitalWrite(13, LOW);
  
  // Wait
  delay(3000);
  */

  // Tutorial Part B: input-dependent
  // Read the state of the pushbutton value
  buttonState = digitalRead(2);
  
  // check if pushbutton is pressed -> turn LED on
  if(buttonState == HIGH){
    digitalWrite(13, HIGH);
  }
  else{
    digitalWrite(13,LOW);
  }
  
    delay(10); // Delay a little bit to improve simulation performance
}
