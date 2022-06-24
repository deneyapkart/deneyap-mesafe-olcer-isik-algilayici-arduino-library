/*
 *   Yakınlık ve Işık Algılama Okuma örneği,
 *
 *   Bu örnekte temel konfigürasyon ayarları yapılmaktadır.
 *   Sensörden gelen Işık Yoğunluğu verilerini almaktadır. Gelen verileri seri terminale yazdırmaktadır.
 *
 *   Bu algılayıcı I2C haberleşme protokolü ile çalışmaktadır.
 *
 *   Bu örnek Deneyap Mesafe Ölçer&Işık Algılayıcı için oluşturulmuştur
 *      ------> www.....com <------ //docs
 *      ------> https://github.com/deneyapkart/deneyap-mesafe-olcer-isik-algilayici-arduino-library <------
 *
 */
#include <Deneyap_MesafeOlcerIsikAlgilayici.h>                 // Deneyap_MesafeOlcerIsikAlgilayici.h kütüphanesi eklenmesi

ProximityAL IsikYogunlugu;                                     // ProximityAL için class tanımlanması

float IsikYogunluguDegeri;

void setup() {
    Serial.begin(115200);                                      // Seri haberleşme başlatılması
    IsikYogunlugu.begin(0x23);                                 // begin(slaveAdress) fonksiyonu ile cihazların haberleşmesi başlatılması
}

void loop() {
    IsikYogunluguDegeri = IsikYogunlugu.getLuxValue();         // Işık Yogunlugunu degerinin alınması
    Serial.print("Işık Yoğunluğu = ");
    Serial.println(IsikYogunluguDegeri, 2);                    // Işık Yogunlugunu degerinin seri terminale yazdırılması

    delay(50);
}
