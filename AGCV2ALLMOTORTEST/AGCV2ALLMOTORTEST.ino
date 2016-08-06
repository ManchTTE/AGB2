
#define HB1PWM 44
#define HB1IN2 43
#define HB1IN1 42

#define HB2PWM 45
#define HB2IN1 47
#define HB2IN2 48

#define HB3PWM 46
#define HB3IN1 4
#define HB3IN2 49
#define LED 13
#define LEDG1 A3

int tick = 0;
void function_stop(int a, int b, int c) {
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  analogWrite(c, 0);
}
void function_motor(int a, int b, int c) {
  digitalWrite(a, HIGH);
  digitalWrite(b, LOW);
  analogWrite(c, 125);
}
void setup() {
  pinMode(HB2IN1  , OUTPUT);       //MOTOR 1 INPUT1
  pinMode(HB2PWM , OUTPUT);     //MOTOR 1 INPUT1
  pinMode(HB2IN2  , OUTPUT);           //MOTOR 1 INPUT1
  pinMode(HB1IN1  , OUTPUT);
  pinMode(HB1PWM, OUTPUT);
  pinMode(HB1IN2  , OUTPUT);

  pinMode(HB3IN1  , OUTPUT);
  pinMode(HB3PWM, OUTPUT);
  pinMode(HB3IN2  , OUTPUT);
  pinMode(LED, OUTPUT);
  digitalWrite(LED, HIGH);
  //
    function_motor(HB1IN1, HB1IN2, HB1PWM);
    function_motor(HB2IN1, HB2IN2, HB2PWM);
    function_motor(HB3IN1, HB3IN2, HB3PWM);
}

void loop() {
//    if (tick >= 2000) {tick=0;}
//  if (tick <= 1000) {
delay(2000);
    function_motor(HB1IN1, HB1IN2, HB1PWM);
    function_motor(HB2IN1, HB2IN2, HB2PWM);
   function_motor(HB3IN1, HB3IN2, HB3PWM);
//  } else {
delay(2000);
    function_stop(HB1IN2, HB1IN1, HB1PWM);
    function_stop(HB2IN2, HB2IN1, HB2PWM);
    function_stop(HB3IN2, HB3IN1, HB3PWM);

delay(2000);
    function_motor(HB1IN2, HB1IN1, HB1PWM);
    function_motor(HB2IN2, HB2IN1, HB2PWM);
    function_motor(HB3IN2, HB3IN1, HB3PWM);
//  }
//  for (int i = 0; i < 255; i++) {
//    analogWrite(LED, i);
//    delay(2);
//  }
//  for (int i = 255; i > 0; i--) {
//    analogWrite(LED, i);
//    delay(2);
//  }
////
//tick+=tick;
}
