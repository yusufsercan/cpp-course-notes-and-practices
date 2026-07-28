

#include <iostream>
#include <string>

using namespace std;

// Nesne yönelimli programlamada fonksiyon (Method) kullanımı
class Car
{
public:
    // Attributes (Özellikler)
    string brand; // brand: marka
    string model;
    int year;

    // Methods (Davranışlar / Fonksiyonlar)
    void message()
    {
        cout << "Hello C++ OOP!\n";
    }

    int speed(int mySpeed)
    {
        return mySpeed;
    }
};

int main()
{
    Car c1;
    c1.brand = "Skoda";
    c1.model = "Superb";
    c1.year = 2001;

    Car c2;
    c2.brand = "Nissan";
    c2.model = "Juke";
    c2.year = 2003;

    c1.message();
    
    cout << c1.brand << "-" << c1.model << "-" << c1.year << "-" << c1.speed(180) << "\n";
    cout << c2.brand << "-" << c2.model << "-" << c2.year << "-" << c2.speed(140) << "\n";

    return 0;
}