// Program untuk menghitung berat badang ideal

#include <iostream>
using namespace std;

int main() {
    // Deklarasi
    int tinggi;
    float berat_badan_ideal;

    // Algoritma
    cout << "Masukan tinggi badan anda : ";
    cin >> tinggi;
    
    berat_badan_ideal = tinggi - 100;
    berat_badan_ideal = berat_badan_ideal - (berat_badan_ideal * 10 / 100);

    cout << "Berat badan ideal anda adalah " << berat_badan_ideal << endl;
    
    return 0;
}