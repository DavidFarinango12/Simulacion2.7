/*
 *CAPITULO II:PUERTOS DIGITALES - LCD
 *CODIGO 7:MANEJO DE LCD Y ENVIO DE MENSAJES
 *OBJETIVO:USAR METODOS PARA IMPRIMIR MENSAJES Y CICLOS CONDICIONALES
 *FUNCIONES:LIBRERIA LiquidCrystal.h
 *NOMBRE:RAFAEL FARINANGO
 */

#include <LiquidCrystal.h>

LiquidCrystal lcd(13,12,11,10,9,8);
const char vector[7]={'A','R','D','U','I','N','O'};
int i;

 
void setup() {
  lcd.begin(16,2);
}

void loop() {
  lcd.setCursor(0,0);
  lcd.print("HOLA MUNDO DEL");
  for(i=0;i<7;i++){
    lcd.setCursor(i,1);
    lcd.print(vector[i]);
    delay(300);
    }
  lcd.clear();
  delay(200);
}
