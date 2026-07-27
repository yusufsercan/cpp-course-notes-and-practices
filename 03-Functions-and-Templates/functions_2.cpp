#include <iostream>
#include <cmath>
using namespace std;

// ÜS ALMA FONKSİYONLARI


//NOT:Her fonksiyonun içi, kendi bağımsız odasıdır. main fonksiyonunun içindeki sonuc değişkeni ile
// usAlma fonksiyonunun içindeki sonuc değişkeni aslında tamamen farklı iki değişkendir. Sadece isimleri aynıdır.

 float usAlma(float x, float y);

int main()
{
    float taban,sonuc=0;
    int us;
    cout<<"taban ve us degerlerini giriniz:\n";
    cin>>taban>>us;
     sonuc=usAlma(taban,us);
     cout<<"sonuc:"<<sonuc<<"\n";


    return 0;
}
  float usAlma(float x, float y)
  {
      float sonuc=1;
      int    i;
      if(x==0)
      {
          sonuc=0;
      }
      else
      {
          if(y==0)
          {
              sonuc=1;
          }
          else if(y<0 )
          {
              for(i=0;i<-y;i++)//burada -y dememizin sebebi mesela y=-4 girdi  y<0 oldu içeri girdi
                               // i nin 4 e kadar gidebilmesi için - ile çarpıyoruz 1 i 2 y, 3 ü deneyip en son 4 e geliyor
              {
                  sonuc*=1/x;  // x=2 y=2 diyelim    sonuc=1*1/2 oldu sonra  sonuc=1/2*1/2 den 1/5 oldu mantığı anla
              }
          }
          else
          {
              for(i=0;i<y;i++)
              {
                  sonuc*=x;
              }
          }
      }
      return sonuc;
  }
 