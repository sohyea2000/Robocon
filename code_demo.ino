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
         else if(i == 'S'){
            backward();
             }
      else if(i =='D'){
             right();}
      else if(i == 'A'){
             left();}
      else if(i=='Q'){
             rightdgnlfwd();}
      else if(i == 'E'){  
             leftdgnlfwd();}
      else if(i=='Z'){  
             rightdgnlbwd();}
      else if(i == 'C'){
            leftdgnlbwd();}
      else if(i =='G'){  
             leftrotate();}
      else if(i =='H'){  
             rightrotate();}
         
      else{
        stopp();
        }
    }
     
    else{}
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
  digitalWrite(frontLMF,LOW);
  digitalWrite(frontLMB,HIGH);
  digitalWrite(frontRMF,LOW);
  digitalWrite(frontRMB,HIGH);
  digitalWrite(backLMF,LOW);
  digitalWrite(backLMB,HIGH);
  digitalWrite(backRMF,LOW);
  digitalWrite(backRMB,HIGH);
  
}

void right(void)   
{
  digitalWrite(frontLMF,LOW);
  digitalWrite(frontLMB,HIGH);
  digitalWrite(frontRMF,HIGH);
  digitalWrite(frontRMB,LOW);
  digitalWrite(backLMF,LOW);
  digitalWrite(backLMB,HIGH);
  digitalWrite(backRMF,HIGH);
  digitalWrite(backRMB,LOW);
  
}

void left(void)   
{
  digitalWrite(frontLMF,HIGH);
  digitalWrite(frontLMB,LOW);
  digitalWrite(frontRMF,LOW);
  digitalWrite(frontRMB,HIGH);
  digitalWrite(backLMF,HIGH);
  digitalWrite(backLMB,LOW);
  digitalWrite(backRMF,LOW);
  digitalWrite(backRMB,HIGH);
  
}

void rightdgnlfwd(void)   
{
  digitalWrite(frontLMF,LOW);
  digitalWrite(frontLMB,LOW);
  digitalWrite(frontRMF,HIGH);
  digitalWrite(frontRMB,LOW);
  digitalWrite(backLMF,LOW);
  digitalWrite(backLMB,LOW);
  digitalWrite(backRMF,HIGH);
  digitalWrite(backRMB,LOW);
  
}

void leftdgnlfwd(void)   
{
  digitalWrite(frontLMF,HIGH);
  digitalWrite(frontLMB,LOW);
  digitalWrite(frontRMF,LOW);
  digitalWrite(frontRMB,LOW);
  digitalWrite(backLMF,HIGH);
  digitalWrite(backLMB,LOW);
  digitalWrite(backRMF,LOW);
  digitalWrite(backRMB,LOW);
  
}

void rightdgnlbwd(void)   
{
  digitalWrite(frontLMF,LOW);
  digitalWrite(frontLMB,HIGH);
  digitalWrite(frontRMF,LOW);
  digitalWrite(frontRMB,LOW);
  digitalWrite(backLMF,LOW);
  digitalWrite(backLMB,HIGH);
  digitalWrite(backRMF,LOW);
  digitalWrite(backRMB,LOW);
}
  


void leftdgnlbwd(void)   
{
  digitalWrite(frontLMF,LOW);
  digitalWrite(frontLMB,LOW);
  digitalWrite(frontRMF,LOW);
  digitalWrite(frontRMB,HIGH);
  digitalWrite(backLMF,LOW);
  digitalWrite(backLMB,LOW);
  digitalWrite(backRMF,LOW);
  digitalWrite(backRMB,HIGH);
}

void rightrotate(void)   
{
 digitalWrite(frontLMF,LOW);
  digitalWrite(frontLMB,HIGH);
  digitalWrite(frontRMF,HIGH);
  digitalWrite(frontRMB,LOW);
  digitalWrite(backLMF,HIGH);
  digitalWrite(backLMB,LOW);
  digitalWrite(backRMF,LOW);
  digitalWrite(backRMB,HIGH);
}
void leftrotate(void)   
{
 digitalWrite(frontLMF,HIGH);
  digitalWrite(frontLMB,LOW);
  digitalWrite(frontRMF,LOW);
  digitalWrite(frontRMB,HIGH);
  digitalWrite(backLMF,LOW);
  digitalWrite(backLMB,HIGH);
  digitalWrite(backRMF,HIGH);
  digitalWrite(backRMB,LOW);
}

void stopp(void)
{
  digitalWrite(frontLMF,LOW);
  digitalWrite(frontLMB,LOW);
  digitalWrite(frontRMF,LOW);
  digitalWrite(frontRMB,LOW);
  digitalWrite(backLMF,LOW);
  digitalWrite(backLMB,LOW);
  digitalWrite(backRMF,LOW);
  digitalWrite(backRMB,LOW);
}
  
