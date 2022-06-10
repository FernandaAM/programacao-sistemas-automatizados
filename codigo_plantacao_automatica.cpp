#define orange 9
#define red 10
#define yellow 11
#define green 12
#define blue 13
#define vcc_umidade A0
#define sig_umidade A1
#define LDR A2
#define buzzer 6
#define orangeLumi 4
#define redLumi 3
#define yellowLumi 5


int cm = 0;
int umidade = 0;
int valorLumi = 0;


void setup()
{
  Serial.begin(9600);
  pinMode(vcc_umidade, OUTPUT);
  pinMode(sig_umidade, INPUT);
  pinMode(red, OUTPUT);
  pinMode(orange, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(redLumi, OUTPUT);
  pinMode(orangeLumi, OUTPUT);
  pinMode(yellowLumi, OUTPUT);
  pinMode(LDR, INPUT);
}

void loop()
{
  noTone(buzzer);
  cm = 0.01723 * ultrassonic(7, 7);
  sensor_umidade();
  luminosidade();
  Serial.print("\nAlcance: ");
  Serial.println(cm);
  delay(500);

  if (valorLumi >= 98 && umidade <= 20 && cm == 336)
  {
    alarme_sonoro();
    desliga_leds();
    lumiOff();
  }

  else if (cm != 336)
   {
    noTone(buzzer);
    acionamento_leds();
    controle_lumi();
   }
  else
  {
    noTone(buzzer);
    desliga_leds();
  }

}

long ultrassonic(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  return pulseIn(echoPin, HIGH);
}

void desliga_leds()
{
  digitalWrite(red, LOW);
  digitalWrite(orange, LOW);
  digitalWrite(yellow, LOW);
  digitalWrite(green, LOW);
  digitalWrite(blue, LOW);
}

int sensor_umidade()
{
  digitalWrite(vcc_umidade, HIGH);
  delay(10);
  umidade = analogRead(sig_umidade);
  delay(100);
  digitalWrite(vcc_umidade, LOW);
  Serial.print("Umidade: ");
  Serial.println(umidade);
  delay(100);
}

long luminosidade()
{
  valorLumi = map(analogRead(LDR), 26, 923, 0, 100);
  Serial.print("Luminosidade: ");
  Serial.println(valorLumi);
  delay(100);
  controle_lumi();
}

int alarme_sonoro()
{
  tone(buzzer,261);
  delay(200);
  noTone(buzzer);
  tone(buzzer,293);
  delay(200);
  noTone(buzzer);
  tone(buzzer,329);
  delay(200);
  noTone(buzzer);
  tone(buzzer,349);
  delay(200);
  noTone(buzzer);
  tone(buzzer,392);
  delay(200);
  noTone(buzzer);
}

void acionamento_leds()
{
  desliga_leds();
  if (umidade < 200) {
    digitalWrite(red, HIGH);
  } else {
    if (umidade < 400) {
      digitalWrite(orange, HIGH);
    } else {
      if (umidade < 600) {
        digitalWrite(yellow, HIGH);
      } else {
        if (umidade < 800) {
          digitalWrite(green, HIGH);
        } else {
          digitalWrite(blue, HIGH);
        }
      }
    }
  }
  delay(100);
}

void controle_lumi()
{
  lumiOff();
  if(valorLumi >= 0 && valorLumi <= 89)
    digitalWrite(yellowLumi, HIGH);

  else if(valorLumi > 89 && valorLumi <= 97)
  	digitalWrite(orangeLumi, HIGH);

  else
  	digitalWrite(redLumi, HIGH);

  delay(100);
}

void lumiOff()
{
  digitalWrite(yellowLumi, LOW);
  digitalWrite(orangeLumi, LOW);
  digitalWrite(redLumi, LOW);
}
