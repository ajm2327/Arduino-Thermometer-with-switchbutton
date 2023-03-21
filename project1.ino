#include <dht11.h>
#define DHT11PIN 2 //Pin 2 on arduino
#include <LiquidCrystal.h>

//Define each pin on the lcd
int rs = 7;
int en = 8;
int d4 = 9;
int d5 = 10;
int d6 = 11;
int d7 = 12;
//Initialize LCD
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
//Initialize temperature sensor
dht11 DHT11;
//Pushbutton and LED pins
const int buttonPin = 3;
const int ledFpin = 4;
const int ledCpin = 5;
int buttonState = 0;

//Set up code
void   setup()
{
  //Setup leds as output:
  pinMode(ledFpin, OUTPUT);
  pinMode(ledCpin, OUTPUT);
  //Set button pin as input:
  pinMode(buttonPin, INPUT);
  //Start lcd for using both rows on display
  lcd.begin(16,2);
  //Clear at beginning
  lcd.clear();

}

//Main program
void loop()
{


   //Read temperature
   int chk = DHT11.read(DHT11PIN);
   //Temperature in C and convert to F
   double tempc = (double)DHT11.temperature;
   double tempf = 1.8*tempc + 32;


  //Read button press:
  buttonState = digitalRead(buttonPin);

  if(buttonState == HIGH) //Mode 1
  {
  //LED F on:
  digitalWrite(ledFpin, HIGH);
  //LED C off:
  digitalWrite(ledCpin, LOW);
  //Printing temperature to lcd display
  //Print temp in F:
  lcd.setCursor(0,1);
  lcd.print("Temp (F): ");
  lcd.print(tempf, 2);  
  }
  else //Mode 0
  {
  //LED C on:
  digitalWrite(ledCpin, HIGH);
  //LED F off:
  digitalWrite(ledFpin, LOW);
   //Print temp in C:
  lcd.setCursor(0,0);
  lcd.print("Temp (C): ");
  lcd.print(tempc, 2);
  }
  
  
 
  //Delay
  delay(500); //5 seconds should be enough time for someone to read the temp
  lcd.clear();

  delay(1); // 1 milisecond delay for refreshing the temperature. No noticeable blinking

}