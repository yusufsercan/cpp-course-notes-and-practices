#include <iostream>
#include <iomanip>
#include <string>



/* NOT: bi pointer 3 farklı şeklide yazılabilir Örnek;
    string* ptr=&food;
    string * ptr=&food;
    string *ptr=&food;
--------------------------------------------------------------------------------
  --- POINTER YAZIM STANDARTLARI VE TANIMLAMA KURALLARI ---
--------------------------------------------------------------------------------
* RAM Anatomisi -> Bellekteki her veri bloğu benzersiz bir "Adres" (Oda Numarası)
                   ve o adreste saklanan "Değer" (Yük) ikilisinden oluşur.

* Yıldızın Konumu -> "T* p;", "T * p;" veya "T *p;" yazımları teknik olarak
                     BİREBİR AYNDIR. Derleyici boşlukları önemsemez.

* Çoklu Tanımlama Tuzağı -> Yan yana birden fazla pointer tanımlanırken her
                            değişkenin başına ayrı ayrı yıldız koymak ŞARTTIR:
                            "int *p1, *p2;" --> Doğru (İkisi de pointer)
                            "int* p1, p2;"  --> Yanlış (p2 düz int kalır!)
================================================================================ */ 
using namespace std;
int main()

{
    string food="pizza" ;
     string* ptr=&food;

    cout<<food<<"\n";
    cout<<&food<<"\n";
    cout<<ptr<<"\n"; // burada food un adresini tutuyor yani &food ile aynı adresi tutuyor
    cout<<*ptr<<"\n\n\n"; // burada *ptr diyoruz çünkü ptr pointer ın içinde tuttuğu adresin içerisindeki değere git yani food a git food un içerisnde de pizza varişte onu yazdır diyor

    *ptr="Hamburger";// diyor ki pointer ın içinde tuttuğu adresin içerisindeki değere git yani food a git food un içerisnde de pizza var heh işte onu hambuger yap diyor
    cout<<food<<"\n";
    cout<<ptr<<"\n";// yukarıdakiler le yani pizza olanla aynı adresi tutar
    cout<<*ptr<<"\n";

// ben pointerin içerisindeki değeri güncellediğim zaman otomatikman food değişkeninide güncellemiş oluyorum ztn pointerların amacı da budur
    return 0;
}

// NOT: Pointer, bellekteki herhangi bir noktanın adresini tutabilen özel bir değişkendir






