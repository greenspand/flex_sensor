const int minimum = 370;
const int maximum = 570;

const int sensorPin = 0;

void setup() {
  Serial.begin(9600) ;
}

void loop() {
  
  int value = analogRead(sensorPin);
  
  int position = map(value, minimum, maximum, 0, 130);
  
  onPress(position);
  
  delay(1000);
}

void onPress(int position) {
  
  if (position < 10) position = 10;
  else if (10 <= position && position < 20) position = 20;
  else if (20 <= position && position < 30) position = 30;
  else if (30 <= position && position < 40) position = 40;
  else if (40 <= position && position < 50) position = 50;
  else if (50 <= position && position < 60) position = 60;
  else if (60 <= position && position < 70) position = 70;
  else if (70 <= position && position < 80) position = 80;
  else if (80 <= position && position < 90) position = 90;
  else if (90 <= position && position < 100) position = 100;
  else if (100 <= position && position < 110) position = 110;
  else if (110 <= position && position < 120) position = 120;
  else if (120 <= position && position < 130) position = 130;
  else if (position <= 130) position = 130;
  
  Serial.println(position);
}
