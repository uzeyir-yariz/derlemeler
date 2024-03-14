/*
  30'dan başlıyor
  45'de bitiyor
*/

// ! ! ! burada ki kodlar oled için yazılmıştır 
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

#define OLED_RESET -1
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

void initOLED() {
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1306 allocation failed"));
    for (;;);
  }

  display.display(); // Clear the buffer
  delay(2000); // Pause for 2 seconds
  display.clearDisplay(); // Clear the display buffer.
}

void displayText(const char* text) {
  display.clearDisplay();
  
  display.setTextSize(5);      // Normal 1:1 pixel scale
  display.setTextColor(SSD1306_WHITE); // Draw white text
  display.setCursor(0,0);     // Start at top-left corner
  display.println(text);

  display.display();
}
// ! ! ! burada ki kodlar oled için yazılmıştır 

int randNumber;

void setup() {
  Serial.begin(9600);
  random_num_creat();
  initOLED(); // OLED ekranını başlat
  for(int i = 30; i <= 45; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  random_num_creat();

  String temp_rand = String(randNumber); 

  Serial.print(temp_rand);

  displayText(temp_rand.c_str()); // Metni ekranda göster

  all_led_on();

  delay(5000);
}

// rastgele sayı oluşturun 
void random_num_creat(){randNumber = random(1000, 9999);}

// ayrım 
void yakim_two(){
  if(randNumber % 2 == 0){
    digitalWrite(30, 1); // yeşil
    digitalWrite(34, 0); // kırmızı
    Serial.println(" 0'a tam bölünür");
  } else{
    digitalWrite(30, 0); // yeşil
    digitalWrite(34, 1); // kırmızı
    Serial.println(" 0'a tam bölünmez");
  }}

void yakim_three() {
  if(randNumber % 3 == 0){
    digitalWrite(31, 1); // yeşil
    digitalWrite(35, 0); // kırmızı
  } else{
    digitalWrite(31, 0); // yeşil
    digitalWrite(35, 1); // kırmızı
  }}

void yakim_four() {
  if(randNumber % 4 == 0){
    digitalWrite(32, 1); // yeşil
    digitalWrite(36, 0); // kırmızı
  } else{
    digitalWrite(32, 0); // yeşil
    digitalWrite(36, 1); // kırmızı
  }}

void yakim_five() {
  if(randNumber % 5 == 0){
    digitalWrite(33, 1); // yeşil
    digitalWrite(37, 0); // kırmızı
  } else{
    digitalWrite(33, 0); // yeşil
    digitalWrite(37, 1); // kırmızı
  }}

void yakim_six() {
  if(randNumber % 6 == 0){
    digitalWrite(38, 1); // yeşil
    digitalWrite(42, 0); // kırmızı
  } else{
    digitalWrite(38, 0); // yeşil
    digitalWrite(42, 1); // kırmızı
  }}

void yakim_seven() {
  if(randNumber % 7 == 0){
    digitalWrite(39, 0); // yeşil
    digitalWrite(43, 1); // kırmızı
  } else{
    digitalWrite(39, 1); // yeşil
    digitalWrite(43, 0); // kırmızı
  }}
void yakim_eight() {
  if(randNumber % 8 == 0){
    digitalWrite(40, 0); // yeşil
    digitalWrite(44, 1); // kırmızı
  } else{
    digitalWrite(40, 1); // yeşil
    digitalWrite(44, 0); // kırmızı
  }}

void yakim_nine() {
  if(randNumber % 9 == 0){
    digitalWrite(41, 1); // yeşil
    digitalWrite(45, 0); // kırmızı
  } else{
    digitalWrite(41, 0); // yeşil
    digitalWrite(45, 1); // kırmızı
  }}

// ayrım 

// ışıkları açın / kapatın 
void light_on(){for(int i = 30; i <= 45; i++){digitalWrite(i, 1);}}
void light_of(){for(int i = 30; i <= 45; i++){digitalWrite(i, 0);}}

// tüm ledleri aktif eder
void all_led_on(){
  yakim_two();
  yakim_three();
  yakim_four();
  yakim_five();
  yakim_six();
  yakim_seven();
  yakim_eight();
  yakim_nine();

}

// özel ayar 
void ileri_yakim(){
  for(int i = 30; i <= 45; i++) {
    digitalWrite(i, 1);
    delay(500);
  }

  delay("1000");
  
  for(int i = 30; i <= 45; i++) {
    digitalWrite(i, 0);
    delay(500);
  }}
