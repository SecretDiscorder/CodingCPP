#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
	
   int bilangan;
   
   cout<<"Masukkan Bilangan Acak: ";
   cin>>bilangan;
   
   int proses_bilangan = (bilangan)	% 2;
   
   if(proses_bilangan == 0){
	    cout<<"Angka "<<bilangan<<" adalah angka genap"<<endl;   
   }else{
	    cout<<"Angka "<<bilangan<<" adalah angka ganjil"<<endl;   
   }

    return 0;

}
