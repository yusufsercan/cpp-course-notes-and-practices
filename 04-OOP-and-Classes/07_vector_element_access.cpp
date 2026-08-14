/*
================================================================================
                    C++ VEKTÖR (VECTOR) KULLANIM PROTOKOLÜ
================================================================================

* NEDEN VEKTÖR KULLANIYORUZ?
--------------------------------------------------------------------------------
1. Klasik array'lerden farklı olarak boyutu sabit değildir; program çalışırken
   (runtime) canlı canlı büyüyüp küçülebilir, tamamen dinamiktir.
2. RAM mimarisinde tıpkı array'ler gibi VERİLERİ YAN YANA (bitişik bellek) saklar.
   Bu yüzden verilere erişim ışık hızındadır.
3. "new" ve "delete" ameleliği yoktur, işi bittiğinde RAM'i otomatik temizler!


* TANIMLAMA ÇEŞİTLERİ VE RAM ARKASINDAKİ ANLAMLARI:
--------------------------------------------------------------------------------
vector<int> numbers;        --> Tamamen BOMBOŞ, 0 elemanlı akıllı bir dizi açar.
vector<int> numbers(10);    --> Heap'te yan yana 10 tane kutu açar, içlerini 0 yapar.
vector<int> numbers(10, 7); --> Heap'te 10 tane kutu açar, her birinin içine 7 yazar.


================================================================================
        C++ STL VEKTÖRLERDE ELEMAN ERİŞİMİ VE SINIR GÜVENLİĞİ
================================================================================
1. v[i]        -> Doğrudan erişim (Hızlıdır, sınır kontrolü yapmaz).
2. v.at(i)     -> Güvenli erişim (Sınır aşımında hata fırlatır).
3. v.front()   -> İlk elemanı döner.
4. v.back()    -> Son elemanı döner.
================================================================================
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    // 4 elemanlı vektör tanımı
    vector<int> v = {10, 20, 30, 40};

    cout << "=== 1. TEMEL ERISIM METOTLARI ===" << endl;
    cout << "v[2]             : " << v[2] << endl;        // 30
    cout << "v.at(2)          : " << v.at(2) << endl;     // 30
    cout << "Ilk Eleman (front): " << v.front() << endl; // 10
    cout << "Son Eleman (back) : " << v.back() << endl;  // 40

    cout << "\n=== 2. RANGE-BASED FOR ILE ELEMANLARI YAZDIRMA ===" << endl;
    for (int sayi : v) {
        cout << sayi << " ";
    }
    cout << "\n";

    return 0;
}



















