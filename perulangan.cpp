#include <stdio.h>
#include <iostream>

using namespace std;

int main(){

    int angka_ulang;

    cout<<"Masukan angka untuk mencetak deret bilangan dari 1 sampai: ";
    cin>>angka_ulang;

    for(int i = 1; i <= angka_ulang; i++){
        cout<<i<<" ";
        
    }
    cout<<""<<endl;
    return 0;

}
