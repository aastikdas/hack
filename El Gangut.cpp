#include <iostream>  // Untuk input dan output
#include <cstdlib>   // Untuk fungsi rand()
#include <ctime>     // Untuk waktu acak

using namespace std;

int main() {
    // Seed random number generator agar angka acak berubah setiap kali program dijalankan
    srand(time(0));
    
    int angkaRahasia = rand() % 100 + 1;  // Generate angka acak antara 1 dan 100
    int tebakan;
    int jumlahTebakan = 0;
    
    cout << "Selamat datang di Game Tebak Angka!" << endl;
    cout << "Saya sudah memikirkan sebuah angka antara 1 dan 100." << endl;
    cout << "Coba tebak angka tersebut!" << endl;
    
    do {
        cout << "Masukkan tebakan Anda: ";  // Minta input dari pengguna
        cin >> tebakan;
        jumlahTebakan++;  // Tambah jumlah tebakan
        
        if (tebakan > angkaRahasia) {
            cout << "Terlalu tinggi! Coba lagi." << endl;
        } else if (tebakan < angkaRahasia) {
            cout << "Terlalu rendah! Coba lagi." << endl;
        } else {
            cout << "Selamat! Anda menebaknya dengan benar dalam " << jumlahTebakan << " kali tebakan." << endl;
        }
    } while (tebakan != angkaRahasia);  // Loop berlanjut sampai tebakan benar
    
    return 0;
}
