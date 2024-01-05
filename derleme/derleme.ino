/*
  30'dan başlıyor
  45'de bitiyor
*/

int randNumber;

void setup() {
  Serial.begin(9600);

  for(int i = 30; i <= 45; i++) {
    pinMode(i, OUTPUT);
  }

  pinMode(resetput, INPUT);
}

void loop() {
  all_led_on();

  delay(1000);
}

// rastgele sayı oluşturun 
void random_num_creat(){randNumber = random(1000, 9999); Serial.print(randNumber);}

// ayrım 
void yakim_two(){
  if(randNumber % 2 == 0){
    digitalWrite(30, 1); // yeşil
    digitalWrite(34, 0); // kırmızı 
  } else{
    digitalWrite(30, 0); // yeşil
    digitalWrite(34, 1); // kırmızı
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
  random_num_creat();

  yakim_two();
  yakim_three();
  yakim_four();
  yakim_five();
  yakim_six();
  yakim_seven();
  yakim_eight();
  yakim_nine();}



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
