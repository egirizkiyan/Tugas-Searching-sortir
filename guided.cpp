#include <iostream>
#include <iomanip>
using namespace std;

int data[7] = {1, 8, 2, 5, 4, 9, 7};

void selection_sort() {
    int temp, min, i, j;
    for (i = 0; i < 7; i++) {
        min = i;
        for (j = i + 1; j < 7; j++) {
            if (::data[j] < ::data[min]) { // Memakai :: untuk merujuk ke variabel global data
                min = j;
            }
        }
        temp = ::data[i]; // Memakai :: untuk merujuk ke variabel global data
        ::data[i] = ::data[min]; // Memakai :: untuk merujuk ke variabel global data
        ::data[min] = temp; // Memakai :: untuk merujuk ke variabel global data
    }
}

void binary_search(int cari) {
    int awal = 0, akhir = 6, tengah;
    bool ditemukan = false;

    while (awal <= akhir) {
        tengah = (awal + akhir) / 2;
        if (::data[tengah] == cari) { // Memakai :: untuk merujuk ke variabel global data
            ditemukan = true;
            break;
        } else if (::data[tengah] < cari) { // Memakai :: untuk merujuk ke variabel global data
            awal = tengah + 1;
        } else {
            akhir = tengah - 1;
        }
    }

    if (ditemukan) {
        cout << "Data ditemukan pada index ke-" << tengah << endl;
    } else {
        cout << "Data tidak ditemukan\n";
    }
}

int main() {
    cout << "\tBINARY SEARCH" << endl;

    cout << "Data: ";
    for (int x = 0; x < 7; x++)
        cout << setw(3) << data[x];
    cout << endl;

    cout << "\nMasukkan data yang ingin Anda cari: ";
    int cari;
    cin >> cari;

    cout << "\nData diurutkan: ";
    selection_sort();

    for (int x = 0; x < 7; x++)
        cout << setw(3) << data[x];
    cout << endl;

    binary_search(cari);

    return 0;
}
