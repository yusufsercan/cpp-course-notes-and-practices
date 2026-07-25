#include <iostream>

using namespace std;

// Basit düzeyde amiral battı oyunu (Battleship)
int main() {
    bool ships[4][4] = {
        {0, 0, 1, 1},
        {0, 0, 0, 0},
        {0, 0, 0, 1},
        {0, 1, 0, 0}
    };

    int hits = 0;
    int numberOfTurns = 0;
    int row = 0, col = 0;

    while (hits < 4) {
        cout << "\nSelecting coordinates...\n";
        cout << "Choose a row number between 0 and 3: ";
        cin >> row;

        cout << "Choose a column number between 0 and 3: ";
        cin >> col;

        // GÜVENLİK KONTROLÜ: Her iki girdi de alındıktan sonra kontrol edilir
        if (row < 0 || row > 3 || col < 0 || col > 3) {
            cout << "Gecersiz koordinat! Lutfen 0 ile 3 arasinda sayilar girin.\n";
            continue; // Hatalı girdi olduğu için hamle sayısını artırmadan döngünün başına dön
        }

        // Vurulan konumda gemi var mı kontrol edelim
        if (ships[row][col]) {
            ships[row][col] = 0; 
            hits++;             
            cout << "You hit! (" << (4 - hits) << " left)\n";
        } else {
            cout << "You missed!\n";
        }

        numberOfTurns++; // Sadece geçerli koordinat girildiğinde hamle sayısını artırır
    }

    cout << "\nVictory!\n";
    cout << "You won in " << numberOfTurns << " turns!\n";

    return 0;
}