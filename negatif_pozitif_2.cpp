//girilen sayýnýn negatif yada pozitif özelliklerini
#include <iostream>
using namespace std;
void main(){ //ana blok bas
int a;
cout<<"bir sayý giriniz=";
cin>>a;
if (a>0) //if parentez içinde olacak
{ //1.blok bas yoksa hata verir
cout<<"girdiðiniz sayi : "<<a;
cout<<"bu sayý pozitifdir.\n";
}//1.blok sonu
else
{ //2.blok bas blok olmasada sorun yaratmaz
cout<<"girdiðiniz sayi : \n"<<a;
cout<<"bu sayý negatifdir.\n";
} //2.blok sonu 
cin>>a;
} //ana blok sonu