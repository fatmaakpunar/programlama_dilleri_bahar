#include<iostream>
#include<time.h>
using namespace std;
void main()
{
int a,b,sayi,i=0;
//klavyeden girilen sayýnýn asal olup olunmadýðýnýn bulunmasý
cout<<"sayi girin";
cin>>sayi;
for(i=2;i<sayi;i++)//klavyeden girdiðimiz sayý basamaklarý girildiðinde kalanýný bulcaz
	if(sayi%i==0) break;//64%2=0 asal olmadýðý için break ile durur
	if(i==sayi)
		cout<<sayi<<"girilen bu sayi asaldir";
	else
		cout<<sayi<<"girilen bu sayi asal deðildir";
	cin>>sayi;
}
