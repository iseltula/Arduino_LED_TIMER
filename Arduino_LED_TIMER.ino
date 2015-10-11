int h, m,s;
  
  struct Hora{
    int h;
    int m;
    int s;
  };
 Hora Hini={0,2,0};
 Hora Hfin= {0,4,0};
  
void setup() {

  h=0,m=0,s=0;
  pinMode(13,OUTPUT);
  Serial.begin(9600);

}

void loop() {

  if(++s>59){
    s=0;
    if(++m >59){
      m=0;
      if(++h>23){
        h=0;
      }
    }
  }

  if(h==0&& m==0 && s==40){
    digitalWrite(13,HIGH);
    Serial.println("La hora es:");
    Serial.println(h);
    Serial.println(m);
    Serial.println(s);
    
     }
     else if(h==0&& m==1 && s==0){
      digitalWrite(13,LOW);
     }
  
  delay(1000);

}
