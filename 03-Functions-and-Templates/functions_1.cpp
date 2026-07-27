
#include <iostream>
// bu kodda verilen iki sayının toplamını hesaplayan bir fonksiyon ve bu fonksiyonu çağıran bir ana program bulunmaktadır.
using namespace std;

   int sum(int x, int y);
   void mesaj();

int main()
{
    int myValue,number1=10,number2=20;
    myValue=sum(number1,number2);

    cout<<myValue<<"\n";
    cout<<"\n";
    return 0;
}

int sum(int x, int y)
{
    mesaj();
    return x+y;
}


void mesaj()
{
    cout<<"toplam:";
}
