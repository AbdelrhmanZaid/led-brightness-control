// C++ code
//
 int red = 9;
 int decrease = 10;
 int increase = 11;
 int brightness=255;


void setup()
{
  pinMode(red, OUTPUT);
  pinMode(decrease, INPUT);
  pinMode(increase, INPUT);
  
}

void loop()
{
      analogWrite(red,brightness);

  if(digitalRead(10)==HIGH  ){
    brightness-=63;
    analogWrite(red,brightness);
  }
  if(digitalRead(11)== HIGH){
    brightness+=63;
    analogWrite(red,brightness);
    
 }
  delay(250); 
  
  
}

      