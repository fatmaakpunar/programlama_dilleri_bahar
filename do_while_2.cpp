//0-100 aras� 3 e b�l�nen 10 say�y� bulal�m do while ile
#include<iostream>//k�t�phane dosyay� tan�mlar
#include<time.h>//time kullanabilmek i�in yani random
using namespace std;//cout gibi ifadeleri tan�mlar 
void main()//sabitlerin yerel oldu�unu anlamak i�in
{
	int a=0,d;//a y� program yeniden �al���nca 0 lans�n diye a=0 dedik
	srand(time(NULL));//randomize kullanabilmek i�in 
	do 
	{
		
		d=rand()%101;//random 0-100 aras� say� �retir
		if(d%3==0)// �art�m�z 3 ile b�l�nen say�lar �retsin 
		{
			cout<<"3 e bolunen sayi="<<d<<endl;//ekrana yazd�r�r
		a++;//ka��nc� say� oldu�unu anlamak i�in
		}}
	while(a<10);// 10 say� �retsin
	cin>>a;//ekran dursun diye
}