#include <iostream>
#include <cstdlib> // untuk rand() & srand()
#include <ctime>   // untuk time()
using namespace std;

int main(){
    srand(time(0)); 
    int angkaRahasia = rand() % 100 + 1; // angka 1-100
    
    int tebakan;
    int kesempatan = 3;
    int batasAtas = 100, batasBawah = 1;

    cout<<"=== GAME TEBAK ANGKA ==="<<endl;
    cout<<"Saya memikirkan angka 1 - 100. Anda punya 3 kesempatan."<<endl;

    // Kesempatan 1
    cout<<"Kesempatan 1"<<endl;
    cout<<"Masukkan angka: ";
    cin>>tebakan;

    if(tebakan == angkaRahasia){
        cout<<"🎉 SELAMAT! Anda benar."<<endl;
        return 0;
    } else if(tebakan > angkaRahasia){
        cout<<"❌ Terlalu besar."<<endl;
    } else {
        cout<<"❌ Terlalu kecil."<<endl;
    }

    // Kesempatan 2
    cout<<"Kesempatan 2"<<endl;
    cout<<"Masukkan angka: ";
    cin>>tebakan;

    if(tebakan == angkaRahasia){
        cout<<"🎉 SELAMAT! Anda benar."<<endl;
        return 0;
    } else if(tebakan > angkaRahasia){
        cout<<"❌ Terlalu besar."<<endl;
    } else {
        cout<<"❌ Terlalu kecil."<<endl;
    }

    // Kesempatan 3
    cout<<"Kesempatan 3"<<endl;
    cout<<"Masukkan angka: ";
    cin>>tebakan;

    if(tebakan == angkaRahasia){
        cout<<"🎉 SELAMAT! Anda benar."<<endl;
    } else {
        cout<<"😢 Kesempatan habis! Angka rahasianya "<<angkaRahasia<<endl;
    }

    return 0;
}
