#include <iostream>

using namespace std;

int main()
{
    // STACK BÖLGESİ: Öğrenci sayısını tutacağımız geçici yer
    int number = 0;

    cout << "Enter the number of the students: ";
    cin >> number; // Kullanıcı örneğin 5 girdi.

    // HEAP BÖLGESİ (DİNAMİK DİZİ OLUŞTURMA):
    // "new int[number]" komutuyla Heap  bölgesine gidip tam kullanıcıdan gelen "number" adedinde (örn: 5 adet yan yana) int kutusu kiralıyoruz.
    // "int* myNotes" pointer'ı ise Stack'te durur ve bu 5'li dinamik arsanın ilk kutusunun adresini tutar!
    int* myNotes = new int[number];
    
    // VERİ ALMA:
    cout << "Enter the notes of students:\n";
    for(int i = 0; i < number; i++)
    {
        // Heap'teki o kiraladığımız arsaların içini sırayla (0., 1., 2. indeks) kullanıcının girdiği notlarla dolduruyoruz.
        cin >> myNotes[i];
    }

    // VERİ YAZDIRMA:
    for(int i = 0; i < number; i++)
    {
        // Girilen notları "(i+1)" yaparak ekrana basıyoruz (Note 0: demesin diye 1'den başlatıyoruz).
        cout << "Note " << (i + 1) << ": " << myNotes[i] << "\n";
    }

    // HEAP BÖLGESİNİ TEMİZLEME:
    // "delete[]" kullanarak derleyiciye diyoruz ki: "myNotes pointer'ının gösterdiği o Heap bölgesindeki DİZİNİN tapusunu iptal et, RAM'i tamamen boşalt!"
    delete[] myNotes;

    return 0;
}