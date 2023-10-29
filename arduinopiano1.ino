int btn1 = 1;
int btn2 = 2;
int btn3 = 3;
int btn4 = 4;
int btn5 = 5;
int btn6 = 6;
int btn7 = 7;
int btn8 = 8;
int btn9 = 9;
int btn10 = 10;

int som = 13;

void setup()
{
  pinMode (btn1, INPUT);
  pinMode (btn2, INPUT);
  pinMode (btn3, INPUT);
  pinMode (btn4, INPUT);
  pinMode (btn5, INPUT);
  pinMode (btn6, INPUT);
  pinMode (btn7, INPUT);
  pinMode (btn8, INPUT);
  pinMode (btn9, INPUT);
  pinMode (btn10, INPUT);
  
  pinMode (som, OUTPUT);
}

void loop()
{
  int b1 = digitalRead (btn1);
  int b2 = digitalRead (btn2);
  int b3 = digitalRead (btn3);
  int b4 = digitalRead (btn4);
  int b5 = digitalRead (btn5);
  int b6 = digitalRead (btn6);
  int b7 = digitalRead (btn7);
  int b8 = digitalRead (btn8);
  int b9 = digitalRead (btn9);
  int b10 = digitalRead (btn10);
  
  if (b1 == 1)
  {
    tone (som, 261.63, 100);
  }
  if (b2 == 1)
  {
    tone (som, 293.66, 100);
  }
  if (b3 == 1)
  {
    tone (som, 329.63, 100);
  }
  if (b4 == 1)
  {
    tone (som, 349.23, 100);
  }
  if (b5 == 1)
  {
    tone (som, 392.00, 100);
  }
  if (b6 == 1)
  {
    tone (som, 440.00, 100);
  }
  if (b7 == 1)
  {
    tone (som, 493.88, 100);
  }
  if (b8 == 1)
  {
    tone (som, 600, 100);
  }
  if (b9 == 1)
  {
    tone (som, 700, 100);
  }
  if (b10 == 1)
  {
    tone (som, 800, 100);
  }
  
  delay (10);
}