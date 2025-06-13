#include <iostream>
using namespace std;

void garis() {
    cout << "\n----------------------\n";
}

int main() {
    garis(); // memanggil fungsi garis
    cout << "AMIK BSI - Pondok Labu" << endl;
    garis(); // memanggil fungsi garis

    // Tunggu input agar tidak langsung keluar (opsional)
    cout << "Tekan Enter untuk keluar...";
    cin.get();

    return 0;
}
