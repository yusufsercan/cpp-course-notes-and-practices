/*
================================================================================
    02 - STRUCT WITH METHODS & CONSTRUCTORS
================================================================================
    C++ mimarisinde struct sadece pasif veri tutucu değildir.
    İçine fonksiyon ve yapıcı (constructor) alarak aktif nesne davranışı sergiler.
================================================================================
*/

#include <iostream>
#include <string>

using namespace std;

struct TargetHost {
    // Nitelikler (Attributes) - Struct olduğu için varsayılan PUBLIC'tir
    string domain;
    int openPorts;
    double vulnerabilityScore;

    // Constructor (Yapıcı Metot) - Nesne doğarken otomatik çalışır
    TargetHost(string d, int p, double v) {
        domain = d;
        openPorts = p;
        vulnerabilityScore = v;
    }

    // Üye Fonksiyon (Member Function)
    void printReport() {
        cout << "Hedef      : " << domain << endl;
        cout << "Acik Port  : " << openPorts << endl;
        cout << "Risk Skoru : " << vulnerabilityScore << "/10" << endl;
        cout << "Kritiklik  : " << (vulnerabilityScore >= 7.0 ? "YUKSEK TEHLIKE!" : "NORMAL") << endl;
        cout << "------------------------------------" << endl;
    }
};

int main() {
    // Constructor sayesinde tek satırda nesne ayağa kalkar
    TargetHost host1("secure-internal.api", 2, 3.4);
    TargetHost host2("legacy-auth-system.com", 14, 8.9);

    cout << "=== GUVENLIK DENETIM RAPORU ===" << endl;
    host1.printReport();
    host2.printReport();

    return 0;
}