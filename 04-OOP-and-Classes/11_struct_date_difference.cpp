#include <iostream>
#include <string>
/*

NOT:bu kodda önemli olan kısım tarih hesaplama fonksiyonunun mantığını kavramak.

NOT: C++'ta struct ve class arasındaki tek fark varsayılan erişim belirtecidir.
- struct: İçindeki elemanlar varsayılan olarak PUBLIC başlar.
- class : İçindeki elemanlar varsayılan olarak PRIVATE başlar.
(İhtiyaç duyulursa struct içine de private: yazılarak veri gizlenebilir).

*/

using namespace std;
// 1. Kalıp Tanımı
struct Date
{
    int day;
    int month;
    int year;
};
// Tarih Farkı Hesaplama Fonksiyonu (Fonksiyon Gövdesi)
Date age(Date today, Date birth)
{
    Date sonuc={0,0,0};
    if(today.day<birth.day)
    {
        today.day+=30;
        today.month-=1;
    }
    sonuc.day=today.day-birth.day;

    if(today.month< birth.month)
    {
        today.month+=12;
        today.year-=1;
    }
    sonuc.month = today.month -birth.month;

    sonuc.year=today.year - birth.year;

    return sonuc;
}

int main() 
{
    // Nesne Tanımlama
    Date today, birth, result;

    cout << "Bugunun tarihini girin (gun ay yil): ";
    cin >> today.day >> today.month >> today.year;

    cout << "Dogum tarihinizi girin (gun ay yil): ";
    cin >> birth.day >> birth.month >> birth.year;

    // Fonksiyon çağrısı ve paket aktarımı
    result = age(today, birth);

    cout << "\n=========================================\n";
    cout << " SONUC: " << result.year << " yil " << result.month << " ay " << result.day << " gundur hayattasin!\n";
    cout << "=========================================\n";

    return 0;
}


















