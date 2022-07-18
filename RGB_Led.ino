//Ders5
//                                                    RGB LED çalışması
// Katot RGB led kullanıyorum
/* R=RED Kırmızı
 * G=GREEN Yeşil
 * B=Blue Mavi
 */

#define R 4
#define G 3
#define B 2

int sure = 500;
int My =0;

void setup()
  {
     pinMode(R,OUTPUT);
     pinMode(G,OUTPUT);
     pinMode(B,OUTPUT);
     // RGB ledimin bütün ayaklarını kapatıyorum.
     digitalWrite(R,HIGH);
     digitalWrite(G,HIGH);
     digitalWrite(B,HIGH);
  }
void loop()
  {
    My++;
    if ( My >0 && My <3)// ve mantıksal kapısı &&
        {
          digitalWrite(R,LOW);//katot rgb olduğu için HIGH yerine LOW yazıyoruz
          delay(sure);
          digitalWrite(R,HIGH);
          delay(sure);
          digitalWrite(G,LOW);
          delay(sure);
          digitalWrite(G,HIGH);
          delay(sure);
          digitalWrite(B,LOW);
          delay(sure);
          digitalWrite(B,HIGH);
          delay(sure);
        }
    if ( My >2 && My <6)
        {
          digitalWrite(R,LOW);//katot rgb olduğu için HIGH yerine LOW yazıyoruz
          delay(sure);
          digitalWrite(R,HIGH);
          digitalWrite(G,LOW);
          delay(sure);
          digitalWrite(G,HIGH);
          digitalWrite(B,LOW);
          delay(sure);
          digitalWrite(B,HIGH);
        }

    if ( My == 6)// if koşulunda Eşittir çift eşittir ile çalışır. 
        {
          My=0;// Bunun dışında tek eşittirdir.
        }

 }
