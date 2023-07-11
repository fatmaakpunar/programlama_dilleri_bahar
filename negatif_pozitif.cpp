#include <iostream>
using namespace std;
void main(){
 int i;
cin>>i;
 if ( i % 2 == 1)
cout<<"Tek";
 else
cout<<"Cift"; }
//girilen sayýnýn negatif yada pozitif özelliklerini




#include <iostream>
using namespace std;
void main()
{ //ana blok bas
int a;
cout<<"bir sayý giriniz=";
cin>>a;
if (a>0) //if parentez içinde olacak
{ //1.blok bas yoksa hata verir
cout<<"girdiðiniz sayi : "<<a;
cout<<"bu sayý pozitifdir";
}//1.blok sonu
else
{ //2.blok bas blok olmasada sorun yaratmaz
cout<<"girdiðiniz sayi "<<a;
cout<<"bu sayý negatifdir";
} //2.blok sonu  //ana blok sonu
}