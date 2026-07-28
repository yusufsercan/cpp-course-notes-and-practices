#include <iostream>
#include <string>

using namespace std;




// Void ve pointerın kullanıldığı protokolü anlatan bir örnek

/* 
================================================================================
                      VOID POINTER OKUMA PROTOKOLÜ
================================================================================
     *((int*)ptr)  ---> "ptr adresini 'int pointer' yap, sonra adrese GİT!"
     *((char*)ptr) ---> "ptr adresini 'char pointer' yap, sonra adrese GİT!"

Altın Kural       ---> void* adreslerin içi direkt yıldızla (*) OKUNAMAZ!
                       Önce parantez içinde tipi söylenmeli, sonra okunmalıdır.
================================================================================ */

// void pointer yani türü belli olamyan pointer dır

// 1. TABELA: Tipi belli olmayan joker bir adres (void*) ve o adresi okutacak bir el feneri tüyor (char type) alır.

void showMe(void* ptr, char type);

int main()
{
    // RAM şantiyesinde farklı veri tiplerinde 4 tane oda açıyoruz
    int number = 70;             // 4 byte'lık tam sayı odası
    float number2 = 3.14;        // 4 byte'lık ondalıklı sayı odası
    double number3 = 70.19354;   // 8 byte'lık yüksek hassasiyetli ondalıklı sayı odası
    char letter = 'F';           // 1 byte'lık karakter odası

    // JOKER OPERASYONLAR BAŞLIYOR:
    // showMe fonksiyonuna değişkenlerin sayısal değerlerini değil, RAM ADRESLERİNİ fırlatıyoruz!
    // Yanına da bilgisayarın içeride gözü açılsın diye 'i', 'f', 'd', 'c' gibi harfli tüyolar koyuyoruz.

    showMe(&number, 'i');   // int odasının adresini ve 'i' tüyosunu fırlattık
    showMe(&number2, 'f');  // float odasının adresini ve 'f' tüyosunu fırlattık
    showMe(&number3, 'd');  // double odasının adresini ve 'd' tüyosunu fırlattık
    showMe(&letter, 'c');   // char odasının adresini ve 'c' tüyosunu fırlattık

    return 0;
}

// 2. GÖVDE: Joker kurye (void* ptr) gelen adresi kucağına aldı ama şu an kör, tipini bilmiyor!
void showMe(void* ptr, char type)
{
    // Kapıdan gelen harfli tüyoya göre şantiyede hangi odaya gireceğimizi seçiyoruz
    switch(type)
    {
        // Eğer tüyo 'i' (int) ise:
        case 'i':
            // (int*)ptr    -> Kör void pointer'ı "int pointer" tipine dönüştür (gözünü aç, burası int de!)
            // *((int*)ptr) -> Başındaki yıldızla o adrese GİT ve içerideki 70 yükünü sök getir!
            cout << *((int*)ptr) << "\n";
            break;

        // Eğer tüyo 'c' (char) ise:
        case 'c':
            // (char*)ptr    -> Kör void pointer'ı "char pointer" yap (burası 1 byte'lık char odası de!)
            // *((char*)ptr) -> O adrese GİT ve içerideki 'F' harfini ekrana bas!
            cout << *((char*)ptr) << "\n";
            break;

        // Eğer tüyo 'f' (float) ise:
        case 'f':
            // (float*)ptr    -> Adresi "float pointer" tipine kast et (çevir)
            // *((float*)ptr) -> O adrese GİT ve içerideki 3.14 değerini sök getir!
            cout << *((float*)ptr) << "\n";
            break;

        // Eğer tüyo 'd' (double) ise:
        case 'd':
            // (double*)ptr    -> Adresi "double pointer" tipine çevir
            // *((double*)ptr) -> O adrese GİT ve içerideki 70.19354 değerini bas!
            cout << *((double*)ptr) << "\n";
            break;
    }
}
