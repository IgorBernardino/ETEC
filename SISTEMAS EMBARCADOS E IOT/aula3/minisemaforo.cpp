#define ledverm 7
#define ledama 6
#define ledver 5
  
void setup()
{
  pinMode(ledverm, OUTPUT);
  pinMode(ledama, OUTPUT);
  pinMode(ledver, OUTPUT);
}

void vermelho (int tmp)
{
  digitalWrite(ledverm, HIGH);
  digitalWrite(ledama, LOW);
  digitalWrite(ledver, LOW);
  delay (tmp);
}

void verde (int tmp)
{
  digitalWrite(ledver, HIGH);
  digitalWrite(ledama, LOW);
  digitalWrite(ledverm, LOW);
  delay (tmp);
}

void amarelo (int tmp)
{
  digitalWrite(ledama, HIGH);
  digitalWrite(ledverm, LOW);
  digitalWrite(ledver, LOW);
  delay (tmp);
}

//------//

void loop()
{ 
  
 vermelho (5000);
 verde (7000);
  amarelo(3000); 
}