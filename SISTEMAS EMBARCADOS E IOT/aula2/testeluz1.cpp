int led=10;// variavel

void setup()
{
  pinMode(led,OUTPUT);//OUTPUT = saida, INPUT = entrada
  
}

void loop()
{
  digitalWrite(led,HIGH);
  delay(600);
  digitalWrite(led,LOW);
  delay(600);
}