// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int bilangan;
    
    cout<<"Masukkan Satu Bilangan Real dan Bukan Operasi Matematika: ";
    cin>>bilangan;
    if (bilangan > 0) {
        cout<<"Bilangan positif"<<endl;
    } else if(bilangan == 0){
        cout<<"Bilangan nol"<<endl;
    } else if(bilangan < 0){
        cout<<"Bilangan negatif"<<endl;
    }
    
    cout<<"Program Selesai";

    return 0;
}
