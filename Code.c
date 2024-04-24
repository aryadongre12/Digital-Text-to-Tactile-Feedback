#include <Servo.h>

#define NUM_SERVOS 6

#define upper_left 3
#define upper_right 4
#define middle_left 5
#define middle_right 6
#define lower_left 7
#define lower_right 7

Servo servoMotors[NUM_SERVOS];
int servoPins[NUM_SERVOS] = {upper_left, upper_right, middle_left, middle_right, lower_left, lower_right};
//  servoPins[NUM_SERVOS] = {0,1,2,3,4,5}

void setup() {
  Serial.begin(9600);

  for (int i = 0; i < NUM_SERVOS; i++) {
    servoMotors[i].attach(servoPins[i]);
    delay(100);
  }
}

void loop() {
  String input = "abcdefghijklmnopqrstuvwxyz";     // Sample input
  //String input = "ac rt";
  //String input = "hello world";
  
  resetServos();
  delay(1000);
  
  for (int i = 0; i < input.length(); i++) {
    moveServo(input.charAt(i));
    delay(2500);
    resetServos();
    delay(2500);
  }
}

void moveServo(char ch) {
  for (int i = 0; i < NUM_SERVOS; i++) {
    switch (ch) {
      case 'a':
        if (i == 0) servoMotors[i].write(0);
        break;
      case 'b':
        if (i == 0 || i == 2) servoMotors[i].write(0);
        break;
      case 'c':
        if (i == 0 || i == 1) servoMotors[i].write(0);
        break;
      case 'd':
        if(i == 0 || i == 1 || i == 3) servoMotors[i].write(0);
        break;
      case 'e':
        if(i == 0 || i == 3) servoMotors[i].write(0);
        break;
      case 'f':
        if(i == 0 || i == 1 || i == 2) servoMotors[i].write(0);
        break;
      case 'g':
        if(i == 0 || i == 1 || i == 2 || i == 3) servoMotors[i].write(0);
        break;
      case 'h':
        if(i == 0 || i == 2 || i == 3) servoMotors[i].write(0);
        break;
      case 'i':
        if(i == 1 || i == 2) servoMotors[i].write(0);
        break;
      case 'j':
        if(i == 1 || i == 2 || i == 3) servoMotors[i].write(0);
        break;
      case 'k':
        if(i == 0 || i == 4) servoMotors[i].write(0);
        break;
      case 'l':
        if(i == 0 || i == 2 || i == 4) servoMotors[i].write(0);
        break;
      case 'm':
        if(i == 0 || i == 1 || i == 4) servoMotors[i].write(0);
        break;
      case 'n':
        if(i == 0 || i == 1 || i == 3 || i == 4) servoMotors[i].write(0);
        break;
      case 'o':
        if(i == 0 || i == 3 || i == 4) servoMotors[i].write(0);
        break;
      case 'p':
        if(i == 0 || i == 1 || i == 2 || i == 4) servoMotors[i].write(0);
        break;
      case 'q':
        if(i == 0 || i == 1 || i == 2 || i == 3 || i == 4) servoMotors[i].write(0);
        break;
      case 'r':
        if(i == 0 || i == 2 || i == 3 || i == 4) servoMotors[i].write(0);
        break;
      case 's':
        if(i == 1 || i == 2 || i == 4) servoMotors[i].write(0);
        break;
      case 't':
        if(i == 1 || i == 2 || i == 3 || i == 4) servoMotors[i].write(0);
        break;
      case 'u':
        if(i == 0 || i == 4 || i == 5) servoMotors[i].write(0);
        break;
      case 'v':
        if(i == 0 || i == 2 || i == 4 || i == 5) servoMotors[i].write(0);
        break;
      case 'w':
        if(i == 1 || i == 2 || i == 3 || i == 5) servoMotors[i].write(0);
        break;
      case 'x':
        if(i == 0 || i == 1 || i == 4 || i == 5) servoMotors[i].write(0);
        break;
      case 'y':
        if(i == 0 || i == 1 || i == 3 || i == 4 || i == 5) servoMotors[i].write(0);
        break;
      case 'z':
        if(i == 0 || i == 3 || i == 4 || i == 5) servoMotors[i].write(0);
        break;
      case ' ':
        break;
    }
  }
}

void resetServos() {
  for (int i = 0; i < NUM_SERVOS; i++) {
    servoMotors[i].write(15); // Reset all servos to initial position
    }
}
