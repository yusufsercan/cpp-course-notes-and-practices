#include <iostream>
#include <string>

using namespace std;

/*
================================================================================
                    ---OOP İLK ADIM---
================================================================================
* Class (DortIslem)    -> Mimari projedir, hafızada yer kaplamaz, sadece taslaktır.
* Object (myObject)    -> Projeden üretilen gerçek varlıktır, RAM'de yer kaplar.
* Attribute (number1)  -> Nesnenin sahip olduğu fiziksel özelliklerdir (Çekmeceler).
* Nokta (.) İşareti    -> Nesne kutusunun içindeki o çekmecelere sızma anahtarıdır.
================================================================================

================================================================================
                  ---NESNE İZOLASYONU ALTIN KURALI---
================================================================================
* Bir Class'tan sınırsız sayıda Nesne (Object) üretebiliriz.
* Her nesne RAM'de kendine ait bağımsız bir çelik kasa açar.
* Nesnelerin attribute isimleri aynı olsa bile, değerleri birbirine asla KARIŞMAZ!
================================================================================
*/

class DortIslem
{
    public: // public şu demek: benim yukarıdaki class'ımın içerisinde oluşturacağımdeğişkenler olsun fonksiyonlar olsun buna main'in içerisinde ulaşabilme imkanı sağlıyor.
            // Yani kısaca public diyerek diyoruz ki bu class dışarı açılabilir.
            // Ve eğer public: yazmazsak direkt private olarak algılar yani dışarı çıkamaz.

    int number1; // Class içinde bunlara değişken denmiyor; attribute (özellik/nitelik) denir.
    int number2;
    string myName; // Bu da bir attribute'dur.

    // Gerçek hayat örneği: Mesela meyve diye bir class oluşturup nesne olarak elma, muz, mango yapabilirim 
    // veya araba class'ı oluşturup Volvo, Audi, Toyota gibi nesneler yapabilirim.

    // NOT: Class'ların içinde oluşturduğumuz değişkenlere attribute, fonksiyonlara da method diyoruz.

}; // Burada ; zorunlu!

int main()
{
    DortIslem myObject; // DortIslem class'ının bir nesnesini (object) ürettik.
    
    myObject.number1 = 7; // . anahtarı ile attribute'a ulaşıp değer verdik.
    myObject.number2 = 10;
    myObject.myName = "LYN";

    cout << myObject.myName << "\n";
    cout << myObject.number1 << "\n";
    cout << myObject.number2 << "\n";

    DortIslem myObject2; // İkinci bağımsız nesne (izolasyon kuralı)
    myObject2.number1 = 15;
    myObject2.number2 = 19;
    myObject2.myName = "Sercan";

    cout << myObject2.myName << "\n";
    cout << myObject2.number1 << "\n";
    cout << myObject2.number2 << "\n";

    return 0;
}