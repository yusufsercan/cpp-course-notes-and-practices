/*

================================================================================
                    TEMPLATE (ŞABLON) VE REFERANS PROTOKOLÜ
================================================================================
* Template Nedir? -> Fonksiyonları veri tipinden bağımsız, genel bir kalıp (T)
                     halinde yazma sanatıdır. Kod tekrarını kökten bitirir.
* T Harfi Nedir?  -> "Type" kelimesinin kısaltmasıdır. main'den ne gönderilirse
                     (int, double, string) derleyici arkada T'yi ona dönüştürür.
* Neden & Var?    -> Referans işaretidir. Fonksiyona kopyalama yapmadan direkt
                     değişkenin aslı üzerinde işlem yaptırmak için ŞARTTIR!
================================================================================

================================================================================
                    C++ CLASS TEMPLATES (SINIF ŞABLONLARI) VE OOP
================================================================================
* AMAÇ: Veri tipinden bağımsız (Generic) nesneler ve sınıflar tasarlamak.
* T (Type): main()'den nesne oluşturulurken gönderilen veri tipini temsil eder.
* Kurye (Constructor Parametreleri - d1, d2): main()'den gelen verileri alıp
  sınıfın private kasasındaki (deger1, deger2) değişkenlerine aktaran köprüdür.
================================================================================
*/

#include <iostream>

using namespace std;

// 1. Sınıf Şablonu Tanımlıyoruz (Kalıp)
template <typename T>
class DegerKutusu {
private:
    // Güvenlik Duvarı (Encapsulation)
    T deger1;
    T deger2;

public:
    // Kurucu Fonksiyon (Constructor): d1 ve d2 kuryedir, kasaya veri taşır
    DegerKutusu(T d1, T d2) {
        deger1 = d1;
        deger2 = d2;
    }

    // İki elemanın yerini takas eden metot (Swap)
    void yerDegistir() {
        T gecici = deger1;
        deger1 = deger2;
        deger2 = gecici;
    }

    // Değerleri ekrana basan fonksiyon
    void ekranaYazdir() const {
        cout << "1. Deger: " << deger1 << " | 2. Deger: " << deger2 << endl;
    }
};

int main() {
    cout << "=== INT KUTUSU ===" << endl;
    // T = int olarak kalıbı çalıştırıyoruz
    DegerKutusu<int> sayiKutusu(7, 19);
    sayiKutusu.ekranaYazdir();
    sayiKutusu.yerDegistir();
    sayiKutusu.ekranaYazdir();

    cout << "\n=== CHAR KUTUSU ===" << endl;
    // T = char olarak kalıbı çalıştırıyoruz
    DegerKutusu<char> harfKutusu('F', 'E');
    harfKutusu.ekranaYazdir();
    harfKutusu.yerDegistir();
    harfKutusu.ekranaYazdir();

    cout << "\n=== DOUBLE KUTUSU ===" << endl;
    // T = double olarak kalıbı çalıştırıyoruz
    DegerKutusu<double> ondalikKutusu(7.19, 19.5);
    ondalikKutusu.ekranaYazdir();
    ondalikKutusu.yerDegistir();
    ondalikKutusu.ekranaYazdir();

    return 0;
}  

















