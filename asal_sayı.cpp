#include<iostream>
#include<time.h>
using namespace std;
void main()
{
int a,b,sayi,i=0;
//klavyeden girilen say�n�n asal olup olunmad���n�n bulunmas�
cout<<"sayi girin";
cin>>sayi;
for(i=2;i<sayi;i++)//klavyeden girdi�imiz say� basamaklar� girildi�inde kalan�n� bulcaz
	if(sayi%i==0) break;//64%2=0 asal olmad��� i�in break ile durur
	if(i==sayi)
		cout<<sayi<<"girilen bu sayi asaldir";
	else
		cout<<sayi<<"girilen bu sayi asal de�ildir";
	cin>>sayi;
}
