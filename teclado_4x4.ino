#include <Keypad.h>
#include <LiquidCrystal.h>
LiquidCrystal lcd(8, 9, 10, 11, 12, 13);

const byte Filas = 4;          //KeyPad de 4 filas
const byte Cols = 4;           //y 4 columnas
char letra;
byte Pins_Filas[] = {7, 6, 5, 4};     //Pines Arduino para las filas.
byte Pins_Cols[] = { 3, 2, 1, 0};     // Pines Arduino para las columnas.
     
     char Teclas [ Filas ][ Cols ] =
          {
              {'1','2','3','A'},
              {'4','5','6','B'},
              {'7','8','9','C'},
              {'*','0','#','D'}
          };
     Keypad Teclado1 = Keypad(makeKeymap(Teclas), Pins_Filas, Pins_Cols, Filas, Cols);

     
void setup()
        {             
       
           lcd.begin(16, 2); 
        }

     void loop()
        {       char pulsacion = Teclado1.getKey() ;
                if (pulsacion != 0)  {   
                  letra = pulsacion;
                  
                    lcd.setCursor(0,0);
                    lcd.print("@_MiguelRomeroG");
                    lcd.setCursor(0,1);
                    lcd.print("Tecla: ");
                    lcd.setCursor(10,1);
                    lcd.print(pulsacion);
                    delay(100);
                    lcd.clear();
  
        }
        else {

                    lcd.setCursor(0,0);
                    lcd.print("@_MiguelRomeroG");
                    lcd.setCursor(0,1);
                    lcd.print("Tecla: ");
                    lcd.setCursor(10,1);
                    lcd.print(letra);
                    delay(100);

        }
        }

