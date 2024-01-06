/* 

  |--------------------------|====--            --====|
  |copy right by uzeyir-yariz|==-- code with live --==|
  |--------------------------|====--            --====|
  | > github    : https://github.com/uzeyir-yariz
  | > linkedin  : https://www.linkedin.com/in/üzeyir-yariz-aa2722259/
  | > web site  : https://uzeyir-yariz.com.tr
  | > blog site : https://oldeblog.com.tr
  | > instagram : https://www.instagram.com/uzeyiryariz/

*/

// 30'dan başlıyor 45'de bitiyor 
int randNumber;
int bekleme_suresi = 1000; 

// Dizi değişkenleri
int Y[] = {30, 31, 32, 33, 38, 39, 40, 41};  // Yeşil pinler
int K[] = {34, 35, 36, 37, 42, 43, 44, 45};  // Kırmızı pinler

// şablon
void yakim(int index, int modulo) {
  if (randNumber % modulo == 0) {
    digitalWrite(Y[index], 1);  // yeşil
    digitalWrite(K[index], 0);   // kırmızı
  } else {
    digitalWrite(Y[index], 0);   // yeşil
    digitalWrite(K[index], 1);  // kırmızı
  }
}

void setup() {
  Serial.begin(9600);

  // Pin modlarını ayarla
  for (int i = 0; i < 8; ++i) {
    pinMode(Y[i], OUTPUT);
    pinMode(K[i], OUTPUT);
  }

  open();
}

// ana döngü 
void loop() {
  // make_uzy();

  all_led_on();

  delay(bekleme_suresi);
}

// rastgele sayı oluşturun 
void random_num_creat(){randNumber = random(1000, 9999); Serial.println(randNumber);}

// ışıkları açın / kapatın 
void light_on(){for(int i = 30; i <= 45; i++){digitalWrite(i, 1); delay(50);}}
void light_of(){for(int i = 30; i <= 45; i++){digitalWrite(i, 0); delay(50);}}

// açılış
void open(){
  light_on();
  delay(750);
  light_of();
  delay(500);
  led_on(); delay(200);
  led_of(); delay(200);
  led_on(); delay(200);
  led_on(); delay(200);
  led_of(); delay(200);}

// tüm ledleri aktif eder
void all_led_on(){
  random_num_creat();
    
  yakim(0, 2);
  yakim(1, 3);
  yakim(2, 4);
  yakim(3, 5);
  yakim(4, 6);
  yakim(5, 7);
  yakim(6, 8);
  yakim(7, 9);
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

// led ayarları
void led_on(){
    for(int i = 30; i <= 45; i++) {
    digitalWrite(i, 1);
  }}
void led_of(){
    for(int i = 30; i <= 45; i++) {
    digitalWrite(i, 0);
  }}
// harfler
void make_u(){
  digitalWrite(Y[0], 1); 
  digitalWrite(Y[1], 1); 
  digitalWrite(Y[2], 1); 
  digitalWrite(K[3], 1); 
  digitalWrite(Y[7], 1); 
  digitalWrite(K[6], 1); 
  digitalWrite(K[5], 1); 
  digitalWrite(K[4], 1); delay(bekleme_suresi); led_of();}
void make_z(){
  digitalWrite(Y[0], 1); 
  digitalWrite(K[0], 1); 
  digitalWrite(Y[4], 1); 
  digitalWrite(K[4], 1); 
  digitalWrite(Y[5], 1); 
  digitalWrite(K[2], 1); 
  digitalWrite(Y[3], 1); 
  digitalWrite(K[3], 1); 
  digitalWrite(Y[7], 1); 
  digitalWrite(K[7], 1); delay(bekleme_suresi); led_of();}
void make_y(){  
  digitalWrite(Y[0], 1); 
  digitalWrite(Y[1], 1); 
  digitalWrite(K[1], 1); 
  digitalWrite(Y[5], 1); 
  digitalWrite(K[5], 1); 
  digitalWrite(K[4], 1);  
  digitalWrite(K[6], 1);  
  digitalWrite(K[7], 1);  
  digitalWrite(Y[7], 1);  
  digitalWrite(K[3], 1);  
  digitalWrite(Y[3], 1); delay(bekleme_suresi); led_of();}
// harfleri sırayla yak
void make_uzy(){  
  make_u();
  make_z();
  make_y();}

/* 

  |--------------------------|====--            --====|
  |copy right by uzeyir-yariz|==-- code with live --==|
  |--------------------------|====--            --====|
  | > github    : https://github.com/uzeyir-yariz
  | > linkedin  : https://www.linkedin.com/in/üzeyir-yariz-aa2722259/
  | > web site  : https://uzeyir-yariz.com.tr
  | > blog site : https://oldeblog.com.tr
  | > instagram : https://www.instagram.com/uzeyiryariz/

*/