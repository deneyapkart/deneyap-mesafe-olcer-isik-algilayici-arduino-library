/*
 *   Yakınlık ve Işık Algılama Okuma örneği,
 *
 *   Bu örnekte temel konfigürasyon ayarları yapılmaktadır.
 *   Sensörden gelen Yakınlık değerlerini almaktadır. Gelen verileri seri terminale yazdırmaktadır.
 *
 *   Bu algılayıcı I2C haberleşme protokolü ile çalışmaktadır.
 *
 *   Bu örnek Deneyap Mesafe Ölçer&Işık Algılayıcı için oluşturulmuştur
 *      ------> www.....com <------ //docs
 *      ------> https://github.com/deneyapkart/deneyap-mesafe-olcer-isik-algilayici-arduino-library <------
 *
 */
#include <Deneyap_MesafeOlcerIsikAlgilayici.h>                 // Deneyap_MesafeOlcerIsikAlgilayici.h kütüphanesi eklenmesi

ProximityAL Yakinlik;                                          // ProximityAL için class tanımlanması

uint16_t yakinlikDegeri;

void setup() {
    Serial.begin(115200);                                      // Seri haberleşme başlatılması
    Yakinlik.begin(0x23);                                      // begin(slaveAdress) fonksiyonu ile cihazların haberleşmesi başlatılması
}

void loop() {
    yakinlikDegeri = Yakinlik.getPSvalue();                    // Yakınlık degerinin alınması
    Serial.print("Yakınlık Değeri = ");
    Serial.println(yakinlikDegeri);                            // Yakınlık degerinin seri terminale yazdırılması
    
    delay(50);
}
