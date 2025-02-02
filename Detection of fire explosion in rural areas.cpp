#include <SoftwareSerial.h> 
 
const int flameSensorPin = 2;    
const int buzzerPin = 9;         
const char phoneNumber[] = "+919391029295";  
 

SoftwareSerial sim900(11, 10);     
 
void setup() { 
  pinMode(flameSensorPin, INPUT); 
  pinMode(buzzerPin, OUTPUT); 
  Serial.begin(9600);             
  sim900.begin(9600);            
   
  Serial.println("System ready."); 
} 
 
void loop() { 
  int flameDetected = digitalRead(flameSensorPin);   
 
  if (flameDetected == HIGH) {  
    digitalWrite(buzzerPin, HIGH);   
    Serial.println("Flame detected! Activating alert..."); 
 
    
    makeCall(); 
  } else { 
    digitalWrite(buzzerPin, LOW);   
  } 
 
  delay(100);  
}
void makeCall() { 
  sim900.print("ATD");               
  sim900.print(phoneNumber);         
  sim900.println(";");                
  Serial.println("Calling..."); 
  delay(10000);                     
  sim900.println("ATH");            
  Serial.println("Call ended."); 
} 