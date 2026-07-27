#include <iostream>
#include <cmath>


//Saybot batarya voltaj kontrolu ve varsayilan parametreli fonksiyon ornegi

using namespace std;

// --- PROTOTİPLER ---
void selamla(string isim = "SAYBOT");
int bataryaYuzdesi(float voltaj); // Sadece voltajı alacak
void durumKontrol(int yuzde);

int main() 
{
    float girilenVoltaj;
    int sonucYuzde;

    selamla(); // Varsayılan isimle selamlar

    cout << "Robotun voltajini girin (V): ";
    cin >> girilenVoltaj;
    while (girilenVoltaj > 12.6 || girilenVoltaj < 0) {
        // Kullanıcı 12.6'dan büyük veya 0'dan küçük girerse buraya girer
        cout << "\nHata: Gecersiz voltaj! Lutfen 0 ile 12.6 arasinda bir deger giriniz: ";
        cin >> girilenVoltaj; // Tekrar girdi alıyoruz
    }

    // Fonksiyonu çağırıp gelen sonucu değişkene hapsediyoruz
    sonucYuzde = bataryaYuzdesi(girilenVoltaj);

    cout << "Batarya Durumu: %" << sonucYuzde << endl;

    // Şimdi yüzdeye göre kontrol yapıyoruz
    durumKontrol(sonucYuzde);

    return 0;
}


// --- TANIMLAMALAR ---

void selamla(string isim)
{
    cout << isim << " : Sistem baslatiliyor...\n";
}

int bataryaYuzdesi(float voltaj) 
{ 
    // Formülü uygula ve tam sayıya çevirip döndür
    int yuzde = (voltaj / 12.6) * 100;
    return yuzde; // Sonucu geri gönderiyoruz
}

void durumKontrol(int yuzde) 
{
    if (yuzde < 20) {
        cout << "UYARI: Batarya Dusuk!\n";
    } else {
        cout << "Sistem Stabil.\n";
    }
}


