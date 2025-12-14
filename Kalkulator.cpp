#include <iostream>
using namespace std;

enum operasi {
    penjumlahan = 1,
    pengurangan,
    perkalian,
    pembagian,
    keluar
};
void menu(){
    cout << "\n===== KALKULATOR =====\n";
    cout << "Pilih Operasi :" << endl;
    cout << "1. Penjumlahan" << endl;
    cout << "2. Pengurangan" << endl;
    cout << "3. Perkalian" << endl;
    cout << "4. Pembagian" << endl;
    cout << "5. Keluar" << endl;
    cout << "======================" << endl;
}
int main(){
    float angka1, angka2, hasil;
    int pilihan;

    do{
        menu();
        cout << "Pilih Menu (1-5) :";
        cin >> pilihan;

        switch(pilihan){
        case penjumlahan:
            cout << "Masukan Angka 1 : ";
            cin >> angka1;
            cout << "Masukan Angka 2 : ";
            cin >> angka2;
            hasil = angka1 + angka2;
            cout << angka1 << " + " << angka2 << " = " << hasil;
            break;
        case pengurangan:
            cout << "Masukan Angka 1 : ";
            cin >> angka1;
            cout << "Masukan Angka 2 : ";
            cin >> angka2;
            hasil = angka1 - angka2;
            cout << angka1 << " - " << angka2 << " = " << hasil;
            break;
        case perkalian:
            cout << "Masukan Angka 1 : ";
            cin >> angka1;
            cout << "Masukan Angka 2 : ";
            cin >> angka2;
            hasil = angka1 * angka2;
            cout << angka1 << " x " << angka2 << " = " << hasil;
            break;
        case pembagian:
            cout << "Masukan Angka 1 : ";
            cin >> angka1;
            cout << "Masukan Angka 2 : ";
            cin >> angka2;
            if (angka2 == 0){
                cout << "Error::Pembagian dengan 0 tidak bisa dilakukan!";
            }else{
            hasil = angka1 / angka2;
            cout << angka1 << " : " << angka2 << " = " << hasil;
            }
            break;
        case keluar:
            cout << "Terima Kasih Telah Menggunakan Kalkulator Kami" << endl;
            break;
        default:
            cout << "Pilihan tidak valid! Silakan coba lagi." << endl;
            break;
        }
    }while (pilihan != keluar);
    return 0;
}
