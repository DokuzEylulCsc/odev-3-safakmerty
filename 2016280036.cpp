#include <iostream>
#include <string>
#include <fstream>


using namespace std;

struct ogrenci{
    int ogrno;
    char cevap[9];
    int note;

    
};

ogrenci verigir()
{
    ogrenci ogr;

    cout<<"Ogrenci numarasi giriniz: ";
    cin>>ogr.ogrno;
    cout<<endl;

    for(int i=0; i<10; i++){

    cout<< i+1<<". sorunun cevabini giriniz: ";
    cin>>ogr.cevap[i];
    cout<<endl;
    }
    return ogr;

}

int main(){

int sorusayisi = 10;

int ogrencisay;



char cvpan[] = "BADDCBDACC";

for(int i=0; i<10; i++){
cout<<cvpan[i]<<endl;
}

ogrenci ogr1 = verigir();

cout<<ogr1.cevap;

cout<<endl;


}



