


#include <iostream>

using namespace std;

// Pointerlar ve Dizilerin Bellek Iliskisi
int main()
{
    int numbers[5] = {7, 19, 70, 4, 12};

    // Dizinin ismi (&numbers[0]), RAM'deki ilk elemanin adresini tutar.
    cout << "First element address (&numbers[0]): " << &numbers[0] << "\n";
    cout << "First element address via array name (numbers): " << numbers << "\n";

    // Pointer aritmetigi ile elemanlara erisim:
    cout << "0. index value (*numbers): " << *numbers << "\n";         // 7
    cout << "1. index value (*(numbers + 1)): " << *(numbers + 1) << "\n"; // 19
    cout << "2. index value (*(numbers + 2)): " << *(numbers + 2) << "\n"; // 70
    // *numbers yaptığımda ise bana 7 değerini getirir yani ilk dizimin değerini
    // *(numbers+1) yaptığımda ise 1. indeksin değerini veriyor yani 19 u
    // aynı şekilde *(numbers+2) yaptığımda ise 2. indeksin değerini veriyor yani 70 i

    return 0;
}

/*
================================================================================
                    RAM ADRES VE DEĞER EŞLEŞME PROTOKOLÜ
================================================================================
* numbers + i   -> RAM şantiyesindeki ardışık parsellerin AÇIK ADRESİDİR.
                   (int olduğu için her adımda otomatik 4 byte ileri zıplar).

* *(numbers + i)-> O açık adresli parselin içine girildiğinde okunan GERÇEK VERİDİR.
================================================================================
*/