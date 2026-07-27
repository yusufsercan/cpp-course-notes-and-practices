#include <iostream>
#include <cmath>

//compare fonksioyonu

/* --------------------------------------------------------------------------------
7. GÜVENLİK PROTOKOLÜ: compare()
--------------------------------------------------------------------------------
* Ne İş Yapar?: İki string ifadeyi milimetrik olarak karşılaştırır.
* Siber Güvenlik Notu: Dümdüz "==" işaretine göre harf harf kontrolü çok daha
  kesin ve güvenlidir. Şifre doğrulama mekanizmalarında başroldedir.
* Terazinin Sonuçları:
  str1.compare(str2) == 0  --> İki metin BİREBİR AYNDIR (Şifre doğru!).
  str1.compare(str2) < 0   --> str1 sözlükte str2'den ÖNCE gelir.
  str1.compare(str2) > 0   --> str1 sözlükte str2'den SONRA gelir. */

  using namespace std;
  int main()
{
    string password="hope";
    string enterCode;

    cout<<"please enter password:";
    getline(cin,enterCode);//veri sızması engellemek için getline kullanıyoruz. cin>>enterCode; yerine getline kullanmak daha güvenlidir.

    if(password.compare(enterCode)==0)
    {
        cout<<"password is correct!\n";
    }
    else
    {
        cout<<"password is incorrect\n";
    }


    return 0;
}
