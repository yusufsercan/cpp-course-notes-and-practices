#include <iostream>
using namespace std;

/*

* KODUN GERÇEK MANTIĞI VE AMACI:
--------------------------------------------------------------------------------
Eğer bir sınıfın (Class) içinde "new" anahtar sözcüğüyle dinamik hafıza kiralanıyorsa,
bu sınıfın nesnesi main içinde "delete ptr;" ile silindiğinde, sınıfın İÇİNDEKİ
o dinamik kiralanan uzak alanlar otomatik olarak SİLİNMEZ! Nesne silinir ama
o uzak alanlar RAM'de serseri ve ulaşılamaz olarak kalır. Buna BELLEK SIZINTISI denir.

* DESTRUCTOR (~myMath) BURADA NE İŞE YARIYOR?
--------------------------------------------------------------------------------
"delete ptr;" komutu büyük nesneyi RAM'den kaldırmadan tam bir milisaniye önce
Destructor (~myMath) otomatik olarak uyanır. Büyük nesne yok olup gitmeden önce,
kendi elleriyle içindeki pointer'ların gösterdiği o uzak Heap alanlarını
(number1 ve number2'nin kiraladığı yerleri) "delete" ile temizler. Böylece
arkasında tek bir byte bile çöp bırakmaz, bellek sızıntısını %100 önler!
================================================================================
*/

class myMath
{
private:
    // Sınıfın içindeki bu iki kurye (pointer) ilk doğduklarında RAM'de başboş gezip
    // serseri mayına (Wild Pointer) dönüşmesinler diye kafadan "nullptr" (0) ile kilitliyoruz.
    int* number1 = nullptr;
    int* number2 = nullptr;

public:
    // PARAMETRELİ CONSTRUCTOR 
    myMath(int x, int y)
    {
        // 1. ADIM: "new int"  çalışıyor! RAM'in devasa HEAP (Arsa) bölgesinin bambaşka, uzak iki köşesinden bağımsız iki tane "int" odacığı kiralıyoruz.
        number1 = new int;
        number2 = new int;

        // 2. ADIM: Başına yıldız (*) koyarak o uzak odacıkların İÇİNE sızıyoruz ve dışarıdan gelen (7 ve 12) değerlerini o kutuların içine koyuyoruz.
        *number1 = x;
        *number2 = y;

        cout << "Sum: " << (*number1 + *number2) << "\n";
    }

    // DESTRUCTOR 
    // main içinde "delete ptr;" baltası vurulduğu an, büyük kasa yok olmadan TAM BİR MİLİSANİYE ÖNCE burası çalışır!
    ~myMath()
    {
        // 🚨 BELLEK SIZINTISI (MEMORY LEAK) KALKANI:
        // Eğer buraya bu delete komutlarını yazmazsak; main içindeki "delete ptr;" komutu
        // sadece büyük nesne kasasını silerdi. Heap'in uzak köşesinde kiraladığımız o içinde
        // 7 ve 12 yazan küçük odacıklar RAM'de boş yere yer kaplardı ve RAM şişerdi!
        // İşte nesne tamamen ölmeden önce, kendi elleriyle o uzak arsaları temizleyip bırakıyor. Böylece bellek sızıntısı önlenmiş olur.
        delete number1;
        delete number2;

        // Serseri mayın kalıntısı kalmasın diye kuryelerin elindeki adres haritalarını da yakıyoruz.
        number1 = nullptr;
        number2 = nullptr;

        cout << "Successful: Heap katindaki tum gizli odaciklar temizlendi, sizinti onlendi!\n";
    }
};

int main()
{
    // Heap (Arsa) bölgesinde devasa bir "myMath Nesne Kasası" kiralıyoruz. Stack (Masa) bölgesindeki "ptr" pointer'ı ise bu büyük kasanın adresini elinde tutuyor.
    myMath* ptr = new myMath(7, 12);

    
    //yukarıdaki Destructor (~myMath) otomatik olarak uyanır, önce içindeki o gereksiz odacıkları siler, en son bu büyük nesne kasası RAM'den kalkar!
    delete ptr;

    // ptr pointer'ı boşa çıkan eski adresi gösterip serseri mayına dönüşmesin diye haritasını sıfırlıyoruz.
    ptr = nullptr;

    return 0; 
}


