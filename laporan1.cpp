# <h1 align="center">Laporan Praktikum Modul Tipe Data</h1>
<p align="center">Egi Rizkiyansyah</p>

## Dasar Teori
Pencarian (Searching) adalah proses untuk menemukan suatu nilai tertentu di dalam kumpulan data. Hasil pencarian dapat berupa data yang ditemukan, data yang ditemukan lebih dari satu kali, atau data yang tidak ditemukan. Pencarian sering kali dilakukan pada array atau struktur data lainnya dengan menggunakan teknik perulangan untuk memeriksa setiap elemen.

Ada dua metode utama dalam algoritma pencarian:

1. Sequential Search (Pencarian Sekuensial):
     - Algoritma ini digunakan untuk mencari data pada kumpulan yang belum terurut.
     - Proses pencarian dimulai dari elemen pertama hingga elemen terakhir.
     - Pencarian berhenti saat data ditemukan, dan jika data tidak ditemukan sampai akhir kumpulan, proses pencarian dihentikan.
     - Misalnya, jika mencari angka 7 dalam array A, pencarian akan dimulai dari elemen pertama hingga ditemukan angka 7.

2. Binary Search (Pencarian Biner):
     - Algoritma ini digunakan untuk mencari data pada kumpulan yang sudah terurut.
     - Data harus diurutkan terlebih dahulu sebelum melakukan pencarian.
     - Proses pencarian membagi kumpulan data menjadi dua bagian secara berulang, kemudian membandingkan nilai tengah dengan data yang dicari.
     - Jika data yang dicari lebih besar dari nilai tengah, pencarian dilanjutkan pada bagian kanan. Jika lebih kecil, pencarian dilanjutkan pada bagian kiri.
     - Proses ini terus berulang hingga data ditemukan atau tidak ditemukan.
     - Sebagai contoh, dalam pencarian angka 13 pada array terurut, array dibagi menjadi dua bagian dan nilai tengahnya dibandingkan dengan angka 13.

Meskipun Binary Search lebih efisien untuk data yang sudah terurut, Sequential Search tetap berguna untuk data yang belum terurut. Kedua metode ini penting dalam pengembangan algoritma pencarian data untuk berbagai aplikasi.

## Guided 

### 1. [sequential search]

```C++
#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int data[n] = {9, 4, 1, 7, 5, 12, 4, 13, 4, 10};
    int cari = 10;
    bool ketemu = false;
    int i;

    // algoritma Sequential Search
    for (i = 0; i < n; i++) {
        if(data[i] == cari) {
            ketemu = true;
            break;
        }
    }

    cout << "\t Program Sequential Search Sederhana\n" << endl;
    cout << " data: {9, 4, 1, 7, 5, 12, 4, 13, 4, 10}"<< endl;
    if (ketemu) {
        cout << "\n angka "<< cari << " ditemukan pada indeks ke-" << i << endl;
    } else {
        cout << cari << " tidak dapat ditemukan pada data." << endl;
    }

    return 0;
}
```
#### Full code Screenshot:
![Screenshot 2024-04-02 105106](https://github.com/egirizkiyan/egi12/assets/162097461/c8819ec9-4c99-4018-bf1a-0cb238c8df88)

#### Output:
![Screenshot 2024-04-02 105452](https://github.com/egirizkiyan/egi12/assets/162097461/bb49d912-07c4-4521-bfc6-089c0cfe5e1f)

Kode tersebut adalah implementasi dari algoritma pencarian sederhana yang disebut "Sequential Search" atau "Pencarian Sekuensial". Berikut adalah penjelasan singkat tentang kode tersebut:
1. Deklarasi Variabel:
   - Variabel n digunakan untuk menentukan jumlah elemen dalam array data.
   - Array data digunakan untuk menyimpan kumpulan data yang akan dicari.
   - Variabel cari berisi nilai yang ingin dicari dalam array.
   - Variabel ketemu digunakan untuk menandai apakah nilai yang dicari telah ditemukan atau tidak.
   - Variabel i digunakan sebagai variabel iterasi dalam loop.
2. Sequential Search:
   - Algoritma pencarian dilakukan menggunakan loop for yang akan memeriksa setiap elemen dalam array data.
   - Pada setiap iterasi, nilai dari data[i] dibandingkan dengan nilai yang dicari (cari).
   - Jika nilai yang dicari ditemukan pada posisi i, maka variabel ketemu diset menjadi true, dan loop dihentikan menggunakan break.
3. Output:
   - Setelah pencarian selesai, program menampilkan hasil pencarian.
   - Jika nilai yang dicari ditemukan, program akan menampilkan pesan yang menyatakan bahwa nilai tersebut ditemukan pada indeks ke berapa.
   - Jika nilai yang dicari tidak ditemukan, program akan menampilkan pesan yang menyatakan bahwa nilai tersebut tidak ditemukan dalam data.
4. Pesan Output:
   - Pesan output memberikan informasi tentang apakah nilai yang dicari ditemukan atau tidak, serta indeksnya jika ditemukan.
   - Data yang dicari dan hasil pencarian ditampilkan dengan format yang jelas untuk memudahkan pemahaman.
Kode tersebut merupakan contoh sederhana dari implementasi Sequential Search dalam bahasa pemrograman C++.

### 2. [Binary Search]

```C++
#include <iostream>
using namespace std;


void insertion_sort(char arr[], int length) {
    int i, j;
    char tmp;

    for (i =1; i < length; i++) {
        j = i;

        while (j > 0 && arr[j - 1] < arr[j]) {
            tmp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = tmp;
            j--;
        } // end of while loop
    } // end of for loop
}

void print_array(char a[], int length) {
    
    for(int i=0; i < length; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;
}

int main() {

    int length = 6;
    char a[length] = {'c', 'f', 'a', 'z', 'd', 'p'};

    cout << "Urutan karakter sebelum sorting: " << endl;
    print_array(a, length);

    insertion_sort(a, length);

    cout << "\n Urutan karakter setelah sorting: " << endl;
    print_array(a, length);
}

```
#### Full code Screenshot:
![Screenshot 2024-03-27 002823](https://github.com/egirizkiyan/egi-rizkiyansyah-/assets/162097461/2aa6f87e-3625-43a8-a6bf-56f243fdc1a1)

#### Output:
![Screenshot 2024-03-27 002957](https://github.com/egirizkiyan/egi-rizkiyansyah-/assets/162097461/9b3d64ce-5fa5-4c05-b311-488a03fef2d4)

Program di atas merupakan implementasi algoritma pengurutan menggunakan metode Insertion Sort dalam bahasa pemrograman C++. Algoritma ini bertujuan untuk mengurutkan sebuah array karakter dari nilai yang paling besar ke yang paling kecil.
Proses pengurutan dilakukan dalam fungsi insertion_sort(char arr[], int length). Pada setiap iterasi, algoritma akan membandingkan elemen-elemen array satu per satu dan menyisipkan elemen ke dalam posisi yang sesuai dalam urutan yang telah diurutkan sebelumnya. Ini dilakukan dengan cara memindahkan elemen-elemen yang lebih besar ke posisi yang lebih tinggi dalam array.
Fungsi print_array(char a[], int length) digunakan untuk mencetak isi dari array sebelum dan sesudah proses pengurutan.
Dalam main(), sebuah array karakter diinisialisasi dengan karakter-karakter yang diberikan. Array tersebut kemudian dicetak untuk menampilkan urutan sebelum diurutkan. Setelah itu, fungsi insertion_sort() dipanggil untuk mengurutkan array tersebut. Setelah proses pengurutan selesai, array dicetak lagi untuk menampilkan urutan setelah diurutkan.
Hasil dari program ini adalah array karakter yang telah diurutkan dari nilai yang paling besar hingga yang paling kecil. Program ini membantu memahami konsep algoritma pengurutan serta implementasinya dalam bahasa pemrograman C++. Ini juga memperlihatkan bagaimana algoritma Insertion Sort bekerja dengan membandingkan dan menyisipkan elemen dalam array untuk mencapai hasil pengurutan yang diinginkan.

## Unguided 
### 1. [Soal]

```C++
#include <iostream>
#include <string>

using namespace std;

bool linearSearch(const string& sentence, char target) {
    for (char c : sentence) {
        if (c == target) {
            return true;
        }
    }
    return false;
}

int main() {
    string sentence;
    char target;

    cout << "Masukkan kalimat: ";
    getline(cin, sentence);

    cout << "Masukkan huruf yang ingin dicari: ";
    cin >> target;

    if (linearSearch(sentence, target)) {
        cout << "Huruf '" << target << "' ditemukan dalam kalimat." << endl;
    } else {
        cout << "Huruf '" << target << "' tidak ditemukan dalam kalimat." << endl;
    }

    return 0;
}

```
#### Output:
![Screenshot 2024-04-02 110950](https://github.com/egirizkiyan/egi12/assets/162097461/7b4305f6-79ca-4779-81f6-c7dee31842e8)

#### Full code Screenshot:
![Screenshot 2024-04-02 110748](https://github.com/egirizkiyan/egi12/assets/162097461/3e8c1ede-e848-48ae-aeb8-53706d5645c1)

Kode di atas adalah implementasi dari algoritma pencarian sederhana yang disebut "Linear Search" atau "Pencarian Linier". Berikut adalah penjelasan singkat tentang kode tersebut:

1. Deklarasi Fungsi linearSearch:
   - Fungsi linearSearch digunakan untuk mencari apakah sebuah huruf tertentu terdapat dalam sebuah kalimat.
   - Fungsi ini menerima dua parameter: sentence yang merupakan string yang akan diperiksa, dan target yang merupakan huruf yang ingin dicari.
   - Fungsi ini menggunakan loop for untuk memeriksa setiap karakter dalam kalimat.
   - Jika karakter yang sedang diperiksa sama dengan target, maka fungsi akan mengembalikan true, menandakan bahwa huruf tersebut ditemukan.
   - Jika tidak ada karakter yang sama dengan target setelah semua karakter dalam kalimat diperiksa, maka fungsi akan mengembalikan false, menandakan bahwa huruf tidak ditemukan.
2. Fungsi main:
   - Fungsi main adalah titik masuk utama program.
   - Pertama-tama, program meminta pengguna untuk memasukkan sebuah kalimat menggunakan getline(cin, sentence). Ini memungkinkan pengguna untuk memasukkan kalimat yang terdiri dari beberapa kata.
   - Kemudian, program meminta pengguna untuk memasukkan huruf yang ingin dicari dalam kalimat tersebut.
   - Setelah mendapatkan input dari pengguna, program memanggil fungsi linearSearch untuk mencari apakah huruf yang dimasukkan oleh pengguna terdapat dalam kalimat.
   - Berdasarkan hasil pencarian, program mencetak pesan yang sesuai, yang memberi tahu pengguna apakah huruf tersebut ditemukan dalam kalimat atau tidak.
3. Output:
   - Pesan output memberikan informasi apakah huruf yang dicari ditemukan dalam kalimat atau tidak.
   - Pesan tersebut ditampilkan dengan format yang jelas untuk memudahkan pemahaman pengguna.
Kode tersebut merupakan contoh sederhana dari implementasi Linear Search dalam bahasa pemrograman C++.

### 2. [Soal]

```C++
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int countVowels(const string& sentence) {
    int count = 0;
    for (char c : sentence) {
        // Ubah huruf menjadi huruf kecil untuk memudahkan perbandingan
        char lowercase_c = tolower(c);
        // Periksa apakah huruf adalah huruf vokal
        if (lowercase_c == 'a' || lowercase_c == 'e' || lowercase_c == 'i' || lowercase_c == 'o' || lowercase_c == 'u') {
            count++;
        }
    }
    return count;
}

int main() {
    string sentence;

    cout << "Masukkan kalimat: ";
    getline(cin, sentence);

    int vowelCount = countVowels(sentence);

    cout << "Jumlah huruf vokal dalam kalimat adalah: " << vowelCount << endl;

    return 0;
}

```
#### Output:
![Screenshot 2024-04-02 111926](https://github.com/egirizkiyan/egi12/assets/162097461/04c90359-3d26-483a-93e9-58d20068bb95)

#### Full code Screenshot:
![Screenshot 2024-04-02 111810](https://github.com/egirizkiyan/egi12/assets/162097461/9d91ec39-51b2-46c2-96bf-2ac0366cd751)

Kesimpulan:

Kode di atas adalah program sederhana yang menghitung jumlah huruf vokal dalam sebuah kalimat yang dimasukkan oleh pengguna. Berikut adalah penjelasan lebih detailnya:

1. Header Files dan Namespace:
   - Program menggunakan beberapa header file:
     a. <iostream>: Untuk fungsi input-output standar.
     b. <string>: Untuk bekerja dengan tipe data string.
     c.<cctype>: Untuk fungsi tolower yang digunakan untuk mengubah huruf menjadi huruf kecil.
   - Program menggunakan using namespace std; untuk menghindari penulisan std:: sebelum setiap pemanggilan fungsi atau penggunaan objek dari namespace std.
2. Fungsi countVowels:
   - Fungsi ini bertugas menghitung jumlah huruf vokal dalam sebuah string.
   - Menerima satu parameter sentence yang merupakan kalimat yang akan diperiksa.
   - Variabel count digunakan untuk menyimpan jumlah huruf vokal dalam kalimat.
   - Program menggunakan loop for untuk menelusuri setiap karakter dalam kalimat.
   - Setiap karakter dalam kalimat diubah menjadi huruf kecil menggunakan fungsi tolower untuk memudahkan perbandingan dengan huruf vokal.
   - Jika karakter yang sedang diperiksa adalah salah satu huruf vokal ('a', 'e', 'i', 'o', atau 'u'), maka jumlah huruf vokal count akan bertambah.
3. Fungsi main:
   - Fungsi main adalah titik masuk utama program.
   - Pertama-tama, program meminta pengguna untuk memasukkan sebuah kalimat menggunakan getline(cin, sentence). Ini memungkinkan pengguna untuk memasukkan kalimat yang terdiri dari beberapa kata.
   - Setelah mendapatkan input kalimat dari pengguna, program memanggil fungsi countVowels untuk menghitung jumlah huruf vokal dalam kalimat tersebut.
   - Hasil perhitungan jumlah huruf vokal kemudian dicetak ke layar menggunakan cout.
4. Output:
   - Program mencetak jumlah huruf vokal dalam kalimat yang dimasukkan oleh pengguna.
   - Pesan output memberikan informasi yang jelas tentang jumlah huruf vokal dalam kalimat tersebut.
Dengan demikian, program ini memberikan contoh sederhana tentang cara menghitung jumlah huruf vokal dalam sebuah kalimat menggunakan bahasa pemrograman C++.

### 3. [Soal]

```C++
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
```
#### Output:
![Screenshot 2024-04-02 144008](https://github.com/egirizkiyan/egi12/assets/162097461/b41dcb0e-69ab-4c27-946b-9d7003f38e31)

#### Full code Screenshot:
![Screenshot 2024-04-02 143825](https://github.com/egirizkiyan/egi12/assets/162097461/be66cd61-4dc9-4fe2-a4a4-f0880402afec)

Kesimpulan:

Kode di atas adalah program sederhana yang menghitung berapa kali angka 4 muncul dalam sebuah array menggunakan algoritma Sequential Search. Berikut adalah penjelasan singkat tentang kode tersebut:

1. Header File dan Namespace:
   - Program hanya menggunakan satu header file, yaitu <iostream>, yang digunakan untuk input-output standar.
   - Program menggunakan using namespace std; untuk menghindari penulisan std:: sebelum setiap pemanggilan fungsi atau penggunaan objek dari namespace std.
2. Deklarasi Variabel:
   - Array data menyimpan kumpulan bilangan bulat.
   - Variabel cari digunakan untuk menyimpan nilai yang akan dicari di dalam array.
   - Variabel jumlah digunakan untuk menyimpan berapa kali nilai yang dicari (cari) muncul dalam array.
3. Algoritma Sequential Search:
   - Program menggunakan algoritma Sequential Search untuk mencari berapa kali nilai cari muncul dalam array data.
   - Loop for digunakan untuk menelusuri setiap elemen array data.
   - Setiap elemen array dicek, jika nilainya sama dengan cari, maka jumlah akan bertambah satu.
4 Output:
   - Setelah selesai mencari, program mencetak jumlah kemunculan nilai cari dalam array data menggunakan cout.
Dengan demikian, program ini memberikan contoh sederhana tentang cara menghitung berapa kali suatu nilai muncul dalam sebuah array menggunakan algoritma Sequential Search dalam bahasa pemrograman C++.

## Kesimpulan
Dari beberapa kode yang telah diberikan sebelumnya, dapat disimpulkan beberapa hal terkait dengan algoritma searching dan implementasinya:
1. Program Sequential Search Sederhana:
   - Program ini menggunakan algoritma Sequential Search untuk mencari keberadaan suatu angka dalam sebuah array.
   - Proses pencarian dimulai dari indeks pertama hingga indeks terakhir, dan akan berhenti ketika angka yang dicari ditemukan atau saat seluruh array telah dijelajahi.
   - Jika angka yang dicari ditemukan, program akan mencetak indeks pertama di mana angka tersebut ditemukan. Jika tidak ditemukan, program akan memberikan pesan bahwa angka tidak ditemukan.
2. Program Linear Search untuk Mencari Huruf dalam Kalimat:
   - Program ini menggunakan algoritma Linear Search untuk mencari keberadaan suatu huruf dalam sebuah kalimat.
   - Setiap karakter dalam kalimat dicek satu per satu, dan jika huruf yang dicari ditemukan, program akan memberikan pesan bahwa huruf tersebut ditemukan dalam kalimat.
   - Jika huruf tidak ditemukan, program akan memberikan pesan bahwa huruf tidak ditemukan dalam kalimat.
3. Program Menghitung Jumlah Huruf Vokal dalam Kalimat:
   - Program ini menghitung jumlah huruf vokal dalam sebuah kalimat.
   - Setiap karakter dalam kalimat dicek satu per satu, dan jika karakter tersebut merupakan huruf vokal, jumlah huruf vokal akan bertambah.
   - Program kemudian mencetak jumlah huruf vokal yang ditemukan dalam kalimat.
4. Program Menghitung Jumlah Kemunculan Angka dalam Array dengan Sequential Search:
   - Program ini menghitung berapa kali suatu angka muncul dalam sebuah array menggunakan algoritma Sequential Search.
   - Setiap elemen dalam array diperiksa satu per satu, dan jika nilai tersebut sama dengan nilai yang dicari, jumlah kemunculan akan bertambah.
   - Program kemudian mencetak jumlah kemunculan angka yang dicari dalam array.
Kesimpulannya, kode-kode tersebut menunjukkan penggunaan algoritma pencarian berbeda untuk mencari dan menghitung keberadaan elemen dalam array atau kalimat. Baik itu mencari angka dalam array, mencari huruf dalam kalimat, atau menghitung jumlah huruf vokal dalam kalimat, algoritma pencarian yang digunakan disesuaikan dengan kebutuhan spesifik dari setiap kasus.

## Referensi
[1] Cormen, T. H. (2013). Algorithms Unlocked. MIT Press.
[2] Skiena, S. S. (2008). The Algorithm Design Manual. Springer
[3] Sedgewick, R., & Wayne, K. (2011). Algorithms (4th Edition). Addison-Wesley.