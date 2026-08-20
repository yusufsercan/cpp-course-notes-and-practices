
/*
   -try (Gözetleme Alanı): Riskli bir işlem çalıştırılır (örneğin: sıfıra bölme, bellek tahsisi, dosya okuma, soket bağlantısı). Derleyiciye "Burayı dikkatle izle" denir.
   
   -throw (Alarm Butonuna Basmak): Hata oluştuğu anda fırlatılır. throw çalıştığı an fonksiyon içindeki normal akış anında durur. Altındaki satırlar çalıştırılmaz.

   -catch (Müdahale Ekibi): Fırlatılan verinin türüyle eşleşen blok devreye girer. Hata loglanır, alternatif bir yol denenir veya kullanıcıya temiz bir mesaj verilerek programın güvenle devam etmesi sağlanır.
  
   -Stack Unwinding (Yığın Temizleme): throw fırlatıldığı anda C++, hatayı yakalayacak bir catch bulana kadar çağrı yığınındaki (Stack) tüm yerel nesnelerin destructor'larını sırayla çalıştırıp belleği temizleyerek geriye doğru sarar.
  
   */


#include <iostream>
using namespace std;

void ParaCek(int bakiye, int cekilmekIstenen) {
    cout << "1. Bankamatik karti okudu...\n";

    if (cekilmekIstenen > bakiye) {
        throw 404; // Hata anında akışı kes ve fırlat!
    }

    // throw tetiklenmezse program buradan devam eder:
    cout << "2. Para veriliyor...\n";
    cout << "Basarili bir sekilde paraniz cekilmistir.\n";
    int guncelBakiye = bakiye - cekilmekIstenen;
    cout << "Guncel bakiyeniz: " << guncelBakiye << " TL\n";
}

int main() {
    int bakiye, cekilmekIstenen;

    try {
        cout << "Guncel bakiyenizi girin: ";
        cin >> bakiye;
        cout << "Cekilmek istenen ucreti girin: ";
        cin >> cekilmekIstenen;

        cout << "\n--- Islem Basliyor ---\n";
        ParaCek(bakiye, cekilmekIstenen);
        cout << "--- Islem Sorunsuz Bitti ---\n";
    }
    catch (int hataKodu) {
        cout << "\n[HATA YAKALANDI] Hata Kodu: " << hataKodu << endl;
        cout << "Sebep: Yetersiz Bakiye!\n";
    }

    cout << "\nProgram cokmedi, guvenle calismaya devam ediyor.\n";
    return 0;
}
