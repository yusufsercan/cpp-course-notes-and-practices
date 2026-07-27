// pointer-fonksiyon ilişkisi temel bir örnek.

#include <iostream>

using namespace std;

// Function prototype (Pass-by-pointer)
float getSquare(const float* ptr);

int main()
{
    float number;
    cout << "Enter a number: ";
    cin >> number;

    // getSquare fonksiyonuna number degiskeninin bellek adresini (&) gonderiyoruz:
    cout << "Square of number is: " << getSquare(&number) << "\n";

    return 0;
}

// Function definition
float getSquare(const float* ptr)
{
    // Dereference (*) kullanarak adresteki veriyi okuyor ve karesini donduruyoruz.
    return (*ptr) * (*ptr);
}


    