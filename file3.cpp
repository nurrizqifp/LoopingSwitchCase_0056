#include <iostream>
using namespace std;

float LuasPersegiPanjang(float p, float l){
    return p * l;
}

float LuasLingkaran(float r){
    return 3.14 * r * r;
}

int main(){
    int pilihan;
    float panjang, lebar, jejari;

    do{
        cout << "===============Menu===============" << endl;
        cout << "1. Menghitung Luas Persegi Panjang" << endl;
        cout << "2. Menghitung Luas Lingkaran" << endl;
        cout << "3. Exit" << endl;
        cout << "==================================" << endl;
        cout << "Masukkan Pilihan (1/2/3) : ";
        cin >> pilihan;

        switch(pilihan) {
            case 1 :
                cout << "Menghitung Luas Persegi Panjang" << endl;
                cout << "Masukkan Panjang : ";
                cin >> panjang;
                cout << "Masukkan Lebar : ";
                cin >> lebar;
                cout << "Luas Persegi Panjang : " <<
                LuasPersegiPanjang(panjang, lebar) << endl;
                break;
            case 2 :
                cout << "Menghitung Luas Lingkaran" << endl;
                cout << "Masukkan Jari-jari : ";
                cin >> jejari;
                cout << "Luas Lingkaran : " << LuasLingkaran(jejari) << endl;
                break;
            case 3 :
                cout << "Maturnuwun :D";
                break;
            default :
                cout << "Pilihan anda salah!";
                cout << endl;
                break;
        }
    } while (pilihan != 3);
}