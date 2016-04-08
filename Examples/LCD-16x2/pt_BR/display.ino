// PROGRAMA: DISPLAY LCD 16x02
// AUTOR: Marquistei Medeiros (Marx Medeiros)
// GITHUB: @MarxSteel
//
// POR FAVOR, SE COPIAR MANTENHA OS CRÉDITOS 
 
 
//Carrega a biblioteca LiquidCrystal
#include <LiquidCrystal.h>
 
//Define os pinos que serão utilizados para ligação ao display
LiquidCrystal lcd(PB4, PB5, PB12, PB13, PB14, PB15);

// PINO PB4 - Vai no pino RS do display (Pino 4 Geralmente)
// PINO PB5 - Vai no pino E (Enable) do display (Pino 6 Geralmente)
// PINO PB12 - Pino DB4 do Display (Geralmente Pino 11)
// PINO PB13 - Pino DB5 do Display (Geralmente Pino 12)
// PINO PB14 - Pino DB6 do Display (Geralmente Pino 13)
// PINO PB15 - Pino DB7 do Display (Geralmente Pino 14)
//
// -------------------------------------------------------------------
// OUTROS PINOS
//
// VCC +5V:
// PINO 2 - VCC
// PINO 15/A/Vee (depende de qual modelo do Display)
// 
// GND (GROUND):
// R/W ou RW
// 0V (Luz de fundo, geralmente pino 16)
// PINO VSS
//
// AJUSTE DE CONTRASTE
//
// PINO V0 0 PINO CENTRAL DO POTENCIÔMETRO
// -------------------------------------------------------------------


void setup()
{
  //Define o número de colunas e linhas do LCD
  lcd.begin(16, 2);
}
 
void loop()
{
  //Limpa a tela
  lcd.clear();
  //Posiciona o cursor na coluna 0, linha 0;
  lcd.setCursor(0, 0);
  //Envia o texto entre aspas para o LCD
  lcd.print("1234567890123456");

  //Posiciona o cursor na coluna 1, linha 0;
  lcd.setCursor(0, 1);
  lcd.print("6543210987654321");

}
