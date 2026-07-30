#include <iostream>
using namespace std;

// 1. DÜZEY (Base Class / Dede Sınıf)
// En temel, tüm araçlarda ortak olan özellikleri tutar.
class Vehicle {
public:
    double speed;

    void go() {
        cout << "This vehicle is moving at " << speed << " km/h.\n";
    }

    void stop() {
        cout << "This vehicle has stopped.\n";
    }
};

// 2. DÜZEY (Derived from Vehicle, Base for ElectricCar / Baba Sınıf)
// Vehicle sınıfının tüm özelliklerini miras alır ve kendine ait özellikler ekler.
class Car : public Vehicle {
public:
    int doors = 4;

    void openTrunk() {
        cout << "Trunk opened.\n";
    }
};

// 3. DÜZEY (Derived from Car / Torun Sınıf) -> Multilevel Inheritance
// Hem Car hem de Vehicle sınıflarının TÜM özelliklerini ve metodlarını otomatik kazanır.
class ElectricCar : public Car {
public:
    int batteryCapacity; // kWh cinsinden pil kapasitesi

    void charge() {
        cout << "Charging the electric car...\n";
    }
};

int main() {
    // Torun sınıftan bir nesne üretiyoruz
    ElectricCar myTesla;

    // 1. Düzeyden (Vehicle) miras alınan özellikler:
    myTesla.speed = 120.5;
    myTesla.go(); // Vehicle'a ait metod

    // 2. Düzeyden (Car) miras alınan özellikler:
    myTesla.doors = 2;
    cout << "Number of doors: " << myTesla.doors << "\n";
    myTesla.openTrunk(); // Car'a ait metod

    // 3. Düzeyden (ElectricCar) kendisine ait özellikler:
    myTesla.batteryCapacity = 85;
    cout << "Battery capacity: " << myTesla.batteryCapacity << " kWh\n";
    myTesla.charge(); // Kendisine ait metod

    // En alt düzeyden en üst düzeye geçiş örneği
    myTesla.stop(); // Vehicle'a ait metod

    return 0;
}




