#include <iostream>

using namespace std;

int main() {
    int data[] = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4};
    int cari = 4;
    int jumlah = 0;

    // Algoritma Sequential Search
    for (int i = 0; i < sizeof(data) / sizeof(data[0]); ++i) {
        if (data[i] == cari) {
            jumlah++;
        }
    }

    cout << "Jumlah angka 4 dalam data adalah: " << jumlah << endl;

    return 0;
}
