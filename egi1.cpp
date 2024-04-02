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
