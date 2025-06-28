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
        {"123001", "REINALDI ALIMSYAH CALON BOS MUDA", 90},
        {"123002", "RIFKI DIMAS PANUJU", 88},
        {"111111", "RIZKI DZAKI MUHATADIN", 87},
        {"123004", "SANDI BUDIMAN", 76}, 
        {"123005", "SANDI PRATAMA", 83}
    };

    float nilaiTertinggi = mhs[0].nilai;

    for (int i = 1; i < JUMLAH; i++) {
        if (mhs[i].nilai > nilaiTertinggi) {
            nilaiTertinggi = mhs[i].nilai;
        }
    }

    cout << "=== Daftar Semua Mahasiswa ===\n";
    for (int i = 0; i < JUMLAH; i++) {
        cout << "NIM   : " << mhs[i].nim << endl;
        cout << "Nama  : " << mhs[i].nama << endl;
        cout << "Nilai : " << mhs[i].nilai << endl;
        cout << "-----------------------------\n";
    }

    cout << "\n=== Mahasiswa dengan Nilai Tertinggi ===\n";
    for (int i = 0; i < JUMLAH; i++) {
        if (mhs[i].nilai == nilaiTertinggi) {
            cout << "NIM   : " << mhs[i].nim << endl;
            cout << "Nama  : " << mhs[i].nama << endl;
            cout << "Nilai : " << mhs[i].nilai << endl;
            cout << "-----------------------------\n";
        }
    }

    return 0;
}

