/*
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



















