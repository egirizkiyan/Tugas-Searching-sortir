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
