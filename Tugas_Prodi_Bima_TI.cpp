#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main(){

    string angka;
    cout<<"=============================="<<endl;
    cout<<"Program C++ Menentukan Bilangan Ganjil Atau Genap"<<endl;
    cout<<"Bima Adhi Pratama | Teknik Informatika 2025 | NIM Ganjil"<<endl;
    cout<<"=============================="<<endl;

    cout<<"Masukkan Angka Lalu Tekan ENTER: ";
    cin>> angka;


    char angka_terakhir = angka[angka.size() - 1];
    if ((angka_terakhir - '0') % 2 == 0){
        cout<<"Angka "<<angka<<" yang anda masukkan termasuk angka genap. "<<endl;
    } else {
        cout<<"Angka "<<angka<<" yang anda masukkan termasuk angka ganjil. "<<endl;
    }
    return 0;
}
