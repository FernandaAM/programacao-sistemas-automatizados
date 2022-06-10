/* Visando manter a ordem na sala, evitar colisões entre pessoas que entram e saem e fazer uma contagem
menos errônea do número de ocupantes do local, foram utilizados dois sensores infravermelhos passivos (PIR),
simulando uma porta de entrada e uma porta de saída. Quando o sensor PIR_entrada é acionado, considera-se que
alguém entrou no local. E se o sensor PIR_saida for acionado, então alguém saiu.*/


#include <LiquidCrystal.h>
#define PIR_entrada A0
#define PIR_saida A1
#define buzzer 13

int pessoas = 0;

LiquidCrystal lcd_1(12, 11, 5, 4, 3, 2);

void setup()
{
  lcd_1.begin(16, 2);

  lcd_1.print("Qtd. de pessoas: ");
  pinMode(PIR_entrada, INPUT);
  pinMode(PIR_saida, INPUT);
  pinMode(buzzer, OUTPUT);

}

void loop()
{
  noTone(buzzer);
  lcd_1.setCursor(0, 1);
  lcd_1.print(pessoas);
  delay(1000);

  int estado_entrada = digitalRead(PIR_entrada);
  int estado_saida = digitalRead(PIR_saida);

  if(estado_entrada == HIGH)
    entrada_pessoas();

  else if (estado_saida == HIGH && pessoas > 0)
    saida_pessoas();

  else // Esse trecho de código serve para que caso alguém tente
    	// retornar à sala pela porta de saída não fique um número
    	// negativo de pessoas.
    estado_saida == 0;
}

void acionamento_buzzer()
{
  tone(buzzer,261);
  delay(200);
  noTone(buzzer);
}

int entrada_pessoas()
{
  acionamento_buzzer();
  pessoas++;
  delay(1500);
}
int saida_pessoas()
{
  pessoas--;
  delay(1500);
}
