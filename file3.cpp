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
    } while (pilihan != 3);
}