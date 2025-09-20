#include <stdio.h>
#include <iostream>

using namespace std;

int main(){

   string nama;
   int umur;
   string asal_kota;

   cout<<"=== PROGRAM PERKENALAN ==="<<endl;
   cout<<"Masukkan nama: ";
   cin>>nama;
   cout<<"Masukkan umur: ";
   cin>>umur;
   cout<<"Masukkan asal kota: ";
   cin>>asal_kota;


   cout<<""<<endl;
   cout<<"=== INFORMASI ANDA ==="<<endl;
   cout<<"Nama: "<<nama<<endl;
   cout<<"Umur: "<<umur<<" tahun"<<endl;
   cout<<"Asal: "<<asal_kota<<endl;

   return 0; 

}
