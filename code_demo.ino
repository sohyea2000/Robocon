int frontLMF = 1;              
int frontRMF = 3;               
int frontLMB = 2;              
int frontRMB = 4; 
int backLMF = 5;              
int backRMF = 7;               
int backLMB = 6;              
int backRMB = 8; 
word i;

void setup() {
  
  Serial.begin(9600); 
  while(!Serial);
  pinMode(frontLMF, OUTPUT);
  pinMode(frontRMF, OUTPUT);
  pinMode(frontLMB, OUTPUT);
  pinMode(frontRMB, OUTPUT);
  pinMode(backLMF, OUTPUT);
  pinMode(backRMF, OUTPUT);
  pinMode(backLMB, OUTPUT);
  pinMode(backRMB, OUTPUT);
  Serial.println("enter ur input");
}

void loop()
{    if(Serial.available()){i = Serial.read();
       if(i == 'W'){
             forward();
            }
         
    }
     
 
}

void forward(void)   
{
  digitalWrite(frontLMF,HIGH);
  digitalWrite(frontLMB,LOW);
  digitalWrite(frontRMF,HIGH);
  digitalWrite(frontRMB,LOW);
  digitalWrite(backLMF,HIGH);
  digitalWrite(backLMB,LOW);
  digitalWrite(backRMF,HIGH);
  digitalWrite(backRMB,LOW);
  
  
}

void backward(void)   
{
  
  digitalWrite(frontLMF,HIGH);
  digitalWrite(frontLMB,LOW);
  digitalWrite(frontRMF,HIGH);
  digitalWrite(frontRMB,LOW);
  digitalWrite(backLMF,HIGH);
  digitalWrite(backLMB,LOW);
  digitalWrite(backRMF,HIGH);
  digitalWrite(backRMB,LOW);
}

void right(void)   
{
 digitalWrite(frontLMF,HIGH);
  digitalWrite(frontLMB,LOW);
  digitalWrite(frontRMF,HIGH);
  digitalWrite(frontRMB,LOW);
  digitalWrite(backLMF,HIGH);
  digitalWrite(backLMB,LOW);
  digitalWrite(backRMF,HIGH);
  digitalWrite(backRMB,LOW);
  
}

void left(void)   
{
  digitalWrite(frontLMF,HIGH);
  digitalWrite(frontLMB,LOW);
  digitalWrite(frontRMF,HIGH);
  digitalWrite(frontRMB,LOW);
  digitalWrite(backLMF,HIGH);
  digitalWrite(backLMB,LOW);
  digitalWrite(backRMF,HIGH);
  digitalWrite(backRMB,LOW);
}

void rightdgnlfwd(void)   
{
digitalWrite(frontLMF,HIGH);
  digitalWrite(frontLMB,LOW);
  digitalWrite(frontRMF,HIGH);
  digitalWrite(frontRMB,LOW);
  digitalWrite(backLMF,HIGH);
  digitalWrite(backLMB,LOW);
  digitalWrite(backRMF,HIGH);
  digitalWrite(backRMB,LOW);
}

void leftdgnlfwd(void)   
{
 digitalWrite(frontLMF,HIGH);
  digitalWrite(frontLMB,LOW);
  digitalWrite(frontRMF,HIGH);
  digitalWrite(frontRMB,LOW);
  digitalWrite(backLMF,HIGH);
  digitalWrite(backLMB,LOW);
  digitalWrite(backRMF,HIGH);
  digitalWrite(backRMB,LOW);
}

void rightdgnlbwd(void)   
{
  digitalWrite(frontLMF,HIGH);
  digitalWrite(frontLMB,LOW);
  digitalWrite(frontRMF,HIGH);
  digitalWrite(frontRMB,LOW);
  digitalWrite(backLMF,HIGH);
  digitalWrite(backLMB,LOW);
  digitalWrite(backRMF,HIGH);
  digitalWrite(backRMB,LOW);
}

void leftdgnlbwd(void)   
{
 digitalWrite(frontLMF,HIGH);
  digitalWrite(frontLMB,LOW);
  digitalWrite(frontRMF,HIGH);
  digitalWrite(frontRMB,LOW);
  digitalWrite(backLMF,HIGH);
  digitalWrite(backLMB,LOW);
  digitalWrite(backRMF,HIGH);
  digitalWrite(backRMB,LOW);
}

void rightrotate(void)   
{
 digitalWrite(frontLMF,HIGH);
  digitalWrite(frontLMB,LOW);
  digitalWrite(frontRMF,HIGH);
  digitalWrite(frontRMB,LOW);
  digitalWrite(backLMF,HIGH);
  digitalWrite(backLMB,LOW);
  digitalWrite(backRMF,HIGH);
  digitalWrite(backRMB,LOW);
}

void leftrotate(void)   
{
 digitalWrite(frontLMF,HIGH);
  digitalWrite(frontLMB,LOW);
  digitalWrite(frontRMF,HIGH);
  digitalWrite(frontRMB,LOW);
  digitalWrite(backLMF,HIGH);
  digitalWrite(backLMB,LOW);
  digitalWrite(backRMF,HIGH);
  digitalWrite(backRMB,LOW);
}
