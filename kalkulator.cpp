#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    
    double bilangan_pertama, bilangan_kedua;
    string operator_matematika;
    int proses_math;

    cout<<"Masukkan bilangan pertama: ";
    cin>>bilangan_pertama;

    cout<<"Masukkan operator (+, -, *, /): ";
    cin>>operator_matematika;

    cout<<"Masukkan bilangan kedua: ";
    cin>>bilangan_kedua;

    if(operator_matematika == "+"){
        proses_math = bilangan_pertama + bilangan_kedua;
    }else if(operator_matematika == "-"){
        proses_math = bilangan_pertama - bilangan_kedua;
    }else if(operator_matematika == "*"){
        proses_math = bilangan_pertama * bilangan_kedua;
    }else if(operator_matematika == "/"){
        proses_math = bilangan_pertama / bilangan_kedua;
    }else if(bilangan_kedua == 0){
        cout<<"Error: Tidak dapat membagi dengan nol."<<endl;
    }
    cout<<"Hasilnya: "<<proses_math<<endl;

}
