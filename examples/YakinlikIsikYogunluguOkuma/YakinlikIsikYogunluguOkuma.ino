/*
 *   Yakınlık ve Işık Algılama Okuma örneği,
 *
 *   Bu örnekte temel konfigürasyon ayarları yapılmaktadır.
 *   Sensörden gelen Yakınlık ve Işık Yoğunluğu verilerini almaktadır. Gelen verileri seri terminale yazdırmaktadır.
 *
 *   Bu algılayıcı I2C haberleşme protokolü ile çalışmaktadır.
 *
 *   Bu örnek Deneyap Mesafe Ölçer&Işık Algılayıcı için oluşturulmuştur
 *      ------> www.....com <------ //docs
 *      ------> https://github.com/deneyapkart/deneyap-mesafe-olcer-isik-algilayici-arduino-library <------ 
 *
 */
#include <Deneyap_MesafeOlcerIsikAlgilayici.h>                 // Deneyap_MesafeOlcerIsikAlgilayici.h kütüphanesi eklenmesi

ProximityAL YakinIsik;                                        // ProximityAL için class tanımlanması

uint16_t yakinlikDegeri;
float IsikYogunluguDegeri;

void setup() {
    Serial.begin(115200);                                      // Seri haberleşme başlatılması
    YakinIsik.begin(0x23);
}

void loop() {
    yakinlikDegeri = YakinIsik.getPSvalue();                   // Yakınlık degerinin alınması
    Serial.print("Yakınlık Değeri = ");
    Serial.print(yakinlikDegeri);                              // Yakınlık degerinin seri terminale yazdırılması   
    delay(50);
  
    IsikYogunluguDegeri = YakinIsik.getLuxValue();             // Işık Yogunlugunu degerinin alınması
    Serial.print("\tIşık Yoğunluğu = ");
    Serial.print(IsikYogunluguDegeri, 2);                      // Işık Yogunlugunu degerinin seri terminale yazdırılması
    Serial.print("\n");
    delay(50);
}
