#define RELAY1 18
#define RELAY2 19
#define RELAY3 23
#define RELAY4 25

#define ON HIGH
#define OFF LOW

void setup() {
  // Initialize the Relay pins as Output
  pinMode(RELAY1, OUTPUT);
  pinMode(RELAY2, OUTPUT);
  pinMode(RELAY3, OUTPUT);
  pinMode(RELAY4, OUTPUT);
}

void loop() {
  
//Turn on relay one by one

digitalWrite(RELAY1, ON);
delay(500); 
digitalWrite(RELAY2, ON);
delay(500); 
digitalWrite(RELAY3, ON);
delay(500); 
digitalWrite(RELAY4, ON);
delay(500);

//Turn off relay one by one

digitalWrite(RELAY4, OFF);
delay(500); 
digitalWrite(RELAY3, OFF);
delay(500); 
digitalWrite(RELAY2, OFF);
delay(500); 
digitalWrite(RELAY1, OFF);
delay(500); 

}
