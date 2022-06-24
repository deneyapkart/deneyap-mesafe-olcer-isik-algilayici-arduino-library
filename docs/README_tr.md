# Deneyap Mesafe Ölçer&Işık Algılayıcısı LTR553 Arduino Kütüphanesi

***** Fotoğraf eklenecek ****

Deneyap Mesafe Ölçer&Işık Algılayıcısı LTR553 için Arduino kütüphanesidir.

## :mag_right:Özellikler 
- `Ürün ID` **M28**, **mpv1.0**
- `MCU` LTR553
- `Ağırlık`
- `Modul Boyutları` 
- `I2C Adres` 0x23

| Adres |  | 
| :---  | :---     |
| 0x23  | varsayılan adres |

## :closed_book:Dokümanlar
Deneyap Mesafe Ölçer&Işık Algılayıcısı LTR553

[LTR553-datasheet](https://optoelectronics.liteon.com/upload/download/DS86-2014-0007/LTR-553ALS-01_DS_V1.pdf)

[Arduino Kütüphanesi Nasıl İndirilir](https://docs.arduino.cc/software/ide-v1/tutorials/installing-libraries)

## :pushpin:Deneyap Mesafe Ölçer&Işık Algılayıcısı LTR553
Bu Arduino kütüphanesi Deneyap Mesafe Ölçer&Işık Algılayıcısı LTR553 I2C çevre birimi ile kullanılmasını sağlar. Arduino ile uyumlu, I2C çevre birimine sahip herhangi bir geliştirme kartı ile bu kütüphaneyi projelerinizde kullanabilirsiniz.

## :globe_with_meridians:Repo İçeriği
- `/docs` README_tr.md ve ürün fotoğrafları
- `/examples` .ino uzantılı örnek uygulamalar
- `/src` kütüphane için .cpp ve .h uzantılı dosyalar
- `keywords.txt` Arduino IDE'de vurgulanacak anahtar kelimeler
- `library.properties` Arduino yöneticisi için genel kütüphane özellikleri

## Sürüm Geçmişi
1.0.0 - ilk sürüm

## :rocket:Donanım Bağlantıları
- Deneyap Mesafe Ölçer&Işık Algılayıcısı LTR553 ile kullanılan geliştirme kartı I2C kablosu ile bağlanabilir
- veya jumper kablolar ile 3V3, GND, SDA ve SCL bağlantıları yapılabilir. 

| Mesafe Ölçer&Işık Algılayıcısı | Fonksiyon| Kart pinleri |
| :---     | :---   |   :---  |
| 3.3V     | Güç    | 3.3V    |
| GND      | Toprak |GND      |
| SDA      | I2C Data  | SDA pini |
| SCL      | I2C Clock | SCL pini|
| INT      | Kesme | herhangi bir GPIO pini|

## :bookmark_tabs:Lisans Bilgisi 
Lisans bilgileri için [LICENSE](https://github.com/deneyapkart/deneyap-mesafe-olcer-isik-algilayici-arduino-library/blob/master/LICENSE) dosyasını inceleyin.
