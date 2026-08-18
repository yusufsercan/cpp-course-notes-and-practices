/*
================================================================================
    01 - BASIC STRUCT PACKAGING & OBJECT INITIALIZATION
================================================================================
    Bu kod, farklı veri tiplerini tek çatı altında toplayan isimlendirilmiş
    struct mimarisinin temel sözdizimini ve kullanımını modeller.

    Struct (Yapı): Birbiriyle ilişkili farklı türdeki değişkenleri (int, string, double vb.) tek tek ve dağınık tanımlamak yerine
    tek bir çatı/kalıp altında toplayıp bu kalıptan main içinde kolayca yeni nesneler üretmemizi sağlayan veri paketleme yapısıdır.
    
================================================================================
*/

#include <iostream>
#include <string>

using namespace std;

// 1. Kalıbı (Blueprint) oluşturuyoruz
struct ServerNode {
    string hostName;
    string ipAddress;
    int port;
    bool isActive;
}; 
int main() {
    // 2. Kalıptan nesneleri üretiyoruz
    ServerNode webServer;
    webServer.hostName = "edge-proxy-01";
    webServer.ipAddress = "192.168.1.100";
    webServer.port = 443;
    webServer.isActive = true;

    ServerNode databaseServer;
    databaseServer.hostName = "db-cluster-primary";
    databaseServer.ipAddress = "10.0.0.15";
    databaseServer.port = 5432;
    databaseServer.isActive = false;

    // 3. Ekrana yazdırma
    cout << "=== NODE 1 ===" << endl;
    cout << "Host: " << webServer.hostName << " | IP: " << webServer.ipAddress 
         << ":" << webServer.port << " | Durum: " << (webServer.isActive ? "ONLINE" : "OFFLINE") << endl;

    cout << "\n=== NODE 2 ===" << endl;
    cout << "Host: " << databaseServer.hostName << " | IP: " << databaseServer.ipAddress 
         << ":" << databaseServer.port << " | Durum: " << (databaseServer.isActive ? "ONLINE" : "OFFLINE") << endl;

    return 0;
}


















































