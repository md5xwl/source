#define E0_STEP_PIN        60
#define E0_DIR_PIN         61
#define E0_ENABLE_PIN      56
int led = 13;
void setup() {
  Serial.begin(115200);
  Serial.println("setup: "); 
  pinMode(E0_STEP_PIN, OUTPUT);
  pinMode(E0_DIR_PIN, OUTPUT);
//  pinMode(E0_ENABLE_PIN, OUTPUT);
  pinMode(led, OUTPUT); 
//  digitalWrite(E0_ENABLE_PIN, HIGH); 
}
void step(boolean dir,int steps){

  digitalWrite(E0_DIR_PIN,dir);
  delay(50);
  digitalWrite(led, HIGH); 
  for(int i=0;i<steps;i++){
    digitalWrite(E0_STEP_PIN, HIGH);
    delayMicroseconds(800);
    digitalWrite(E0_STEP_PIN, LOW);
   // delayMicroseconds(800);
   delayMicroseconds(800);
  } 
  digitalWrite(led, LOW);
}
void loop(){
  
  step(true,1600);
  delay(3000);
  step(false,1600*5);
  delay(3000);


  

}


