/*
================================================================================
    C++ STL VECTOR: DEĞİŞTİRİCİLER (MODIFIERS) DERS NOTLARI
================================================================================
* .assign(n, val)  -> Vektörü sıfırlar ve 'n' adet 'val' değeriyle doldurur.
* .push_back(val)  -> Vektörün en arkasına yeni eleman ekler, boyutu 1 artırır.
* .pop_back()      -> En arkadaki elemanı RAM'den siler, parametre almaz.
* .insert(pos, val)-> İteratör ile belirtilen konuma yeni eleman yerleştirir.
                      Örn: numbers.begin() -> Başa ekler
                           numbers.end()   -> Sona ekler
* .erase(pos)      -> İteratör ile belirtilen konumdaki elemanı siler.
                      Örn: numbers.begin() -> İlk elemanı siler
                           numbers.end()-1 -> Son elemanı siler
* .clear()         -> Tüm elemanları temizler, boyutu (size) 0 yapar.
* size()         -> Aktif eleman sayisi.
================================================================================
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numbers;

    // 1. assign: Vektörü baştan doldurur (5 adet 7 yazar)
    numbers.assign(5, 7);
    cout << "1.(assign)    : ";
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }

    // 2. push_back: Verileri arkadan arkaya ekleyerek dinamik genişletir
    numbers.push_back(19);
    numbers.push_back(34);
    cout << "\n\n2.(push_back) : ";
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }

    // 3. pop_back: En arkadaki elemanı (34) RAM'den siler
    numbers.pop_back();
    cout << "\n\n3.(pop_back)  : ";
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }

    // 4. insert: Belirtilen konuma eleman ekler (başa 46, sona 20)
    numbers.insert(numbers.begin(), 46);
    numbers.insert(numbers.end(), 20);
    cout << "\n\n4.(insert)    : ";
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }

    // 5. erase: Belirtilen konumdaki elemanı siler (baştaki 46 silinir)
    numbers.erase(numbers.begin());
    cout << "\n\n5.(erase)     : ";
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }

    // 6. clear: Tüm vektörü tamamen boşaltır (size = 0)
    numbers.clear();
    cout << "\n\n6.(clear)     : ";
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }

    cout << "\n";
    return 0;
}



















