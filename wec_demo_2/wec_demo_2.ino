/*WEC WE Bots Workshop Demo #2.
Arduino program demonstrating servo motor control.
*/

#include <Servo.h>

int pos = 0;
Servo servo_9;

void setup()
{
  servo_9.attach(9,500,2500);
}

void loop()
{
  // Sweep servo from 0 to 90 degrees
  for(pos = 0; pos <= 90; pos += 1){
    // Tell servo to go to position in variable 'pos'
    servo_9.write(pos);
    // Wait 15 ms for the servo to reach position
    delay(15);
  }
  
  for(pos = 90; pos >= 0; pos -= 1){
    // Tell servo to go to position in variable 'pos'
    servo_9.write(pos);
    // Wait 15 ms
    delay(15);
  }
  
    delay(10); // Delay a little bit to improve simulation performance
}
