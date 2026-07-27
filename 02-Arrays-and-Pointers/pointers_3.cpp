#include <iostream>
#include <string>


using namespace std;

// pointer fonksiyonlar / yani buradaki amaç fonksiyonun kendisi pointer olrusa ne olur ?

int multiplication(int x, int y);

int addition(int x, int y);


int main()

{

   int (*func)(int,int);// bir fonksiyonu pointer olarak bu şekilde tanımalrı  func da kendimiz isim verdik orada * koyarak bunun bir pointer fonksiyon oldığunu belirttim

   //int (*func)(int,int); satırıyla sen diyorsun ki: "Ben öyle bir kurye yaratıyorum ki, bu kurye düz bir sayı adresi tutmayacak. Bu kurye, girişinde iki tane int parametre isteyen ve çıkışında int fırlatan fonksiyonların RAM'deki fabrika adresini tutacak!"

   func=multiplication;

   cout<<"x*y= "<<func(7,11)<<"\n";

   func=&addition;

/*    "func = &addition;"
   -> C++ mimarisinde fonksiyonun sadece ismi zaten direkt adres demektir. Başına
      "&" koysan da koymasan da işlemci aynı adresi (Örn: 0xBB11) okur. Kuryenin
      elindeki eski adres silinir, yeni adres toplama makinesi olur. */

   cout<<"x+y= "<<func(5,4)<<"\n";

   cout<<"x+y= "<<(*func)(19,2)<<"\n";

   /* "func(5, 4);" ile "(*func)(19, 2);" Arasındaki Fark Nedir?
   -> Derleyicinin gözünde İKİSİ DE BİREBİR AYNIDIR! Düz çağırmak modern C++
      tarzıdır; başına yıldız koyup paranteze almak ise eski toprak, jargona
      uygun "Adrese git ve fonksiyonu tetikle" demektir. İkisi de çalışır. */

 return 0;

}

int multiplication(int x, int y)

{

    return x*y;

}

int addition(int x, int y)

{

    return x+y;

}
