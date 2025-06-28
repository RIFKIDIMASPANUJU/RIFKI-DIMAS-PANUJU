#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nim;
    string nama;
    float nilai;
};

int main() {
    const int JUMLAH = 5;
    Mahasiswa mhs[JUMLAH] = {
        {"123001", "REINALDI ALIMSYAH", 90},
        {"123002", "RIFKI DIMAS PANUJU", 90},
        {"111111", "RIZKI DZAKI MUHATADIN", 90},
        {"123004", "SANDI BUDIMAN", 00.0}, // Perhatikan nilai ini 00.0
        {"123005", "SANDI PRATAMA", 90}
    };

    float nilaiTertinggi = mhs[0].nilai;
    float nilaiTerendah = mhs[0].nilai;

    // Mencari nilai tertinggi dan terendah
    for (int i = 1; i < JUMLAH; i++) {
        if (mhs[i].nilai > nilaiTertinggi) {
            nilaiTertinggi = mhs[i].nilai;
        }
        if (mhs[i].nilai < nilaiTerendah) {
            nilaiTerendah = mhs[i].nilai;
        }
    }

    
    cout << "=== Mahasiswa dengan Nilai Tertinggi ===\n";
    for (int i = 0; i < JUMLAH; i++) {
        if (mhs[i].nilai == nilaiTertinggi) {
            cout << "NIM   : " << mhs[i].nim << endl;
            cout << "Nama  : " << mhs[i].nama << endl;
            cout << "Nilai : " << mhs[i].nilai << endl;
            cout << "-----------------------------\n";
        }
    }

    
    cout << "=== Mahasiswa dengan Nilai Terendah ===\n";
    for (int i = 0; i < JUMLAH; i++) {
        if (mhs[i].nilai == nilaiTerendah) {
            cout << "NIM   : " << mhs[i].nim << endl;
            cout << "Nama  : " << mhs[i].nama << endl;
            cout << "Nilai : " << mhs[i].nilai << endl;
            cout << "-----------------------------\n";
        }
    }

    return 0;
}

