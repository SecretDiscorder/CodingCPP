#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int bilangan;

    cout<<"Program Menentukan Bilangan Ganjil Genap"<<endl;

    cout<<"Masukan Bilangan (1 - 10000000): ";
    cin>>bilangan;

    int proses_ganjil_genap = (bilangan) % 2;
    cout<<proses_ganjil_genap<<endl;


    if(proses_ganjil_genap  != 0 ){

      cout<<"Angka "<<bilangan<<" termasuk angka ganjil"<<endl;



    }else{

      cout<<"Angka "<<bilangan<<" termasuk angka GENAP"<<endl;


    }



}
