//girilen say�n�n negatif yada pozitif �zelliklerini
#include <iostream>
using namespace std;
void main(){ //ana blok bas
int a;
cout<<"bir say� giriniz=";
cin>>a;
if (a>0) //if parentez i�inde olacak
{ //1.blok bas yoksa hata verir
cout<<"girdi�iniz sayi : "<<a;
cout<<"bu say� pozitifdir.\n";
}//1.blok sonu
else
{ //2.blok bas blok olmasada sorun yaratmaz
cout<<"girdi�iniz sayi : \n"<<a;
cout<<"bu say� negatifdir.\n";
} //2.blok sonu 
cin>>a;
} //ana blok sonu