
#include <iostream>

using namespace std;

/* 
================================================================================
                    ENCAPSULATION (KAPSÜLLEME) PROTOKOLÜ
================================================================================
* Kural 1 -> Attribute'ları her zaman private odasına kilitle (Veri Güvenliği).
* Kural 2 -> Dışarıdan değer GÜNCELLEMEK için "set" metodu yaz (Veri Kontrolü).
* Kural 3 -> İçerideki değeri dışarıya OKUTMAK için "get" metodu yaz (Veri İzleme).

Mühendislik -> Bu sayede değişkenler başıboş kalmaz, ekip arkadaşların veya siber
               tehditler sisteme kafasına göre hatalı veri enjekte edemez!
================================================================================ */

class Employee
{
private:
    // private: Dışarıdan doğrudan erişilemez, yetkisiz müdahaleye kapalıdır.
    int salary; // salary: maaş

public:
    // Setter (Değer Atayıcı / Filtre Kapısı)
    void setSalary(int x)
    {
        if (x > 0) {
            salary = x;
        } else {
            cout << "Gecersiz maas tutari!\n";
        }
    }

    // Getter (Değer Okuyucu / İzleme Kapısı)
    int getSalary()
    {
        return salary;
    }
};

int main()
{
    Employee em;
    
    // em.salary = 30000;  --> HATA! Private olduğu için doğrudan erişilemez.
    em.setSalary(30000);   // Public set metodu üzerinden güvenle atıyoruz.

    cout << em.getSalary() << " TL maasi\n";

    return 0;
}