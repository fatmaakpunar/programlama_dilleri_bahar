//dizilerle ilgili uygulama �rnekleri
//dizinin ortalamas�n� bulup ortalamadan b�y�k elemanlar� yazd�ran program
#include<iostream>
#include<time.h>
using namespace std;
void main()
{
	int dizi[]={1,2,3,4,5,6,1,1,2,7,3,1};
	int b=0,c=0,top=0,k;
	for(b=0;b<12;++b)//dizi elemanlar�n� dizi[b] ata
		top=top+dizi[b];//dizideki say�lar�n toplam�
	//ortalama hesab�
	cout<<"ort="<<top/12.0<<endl;//dizi ortalamas� *11 d�zeltilid 12*
	for(k=0;k<12;++k)//dizi elemanlar�n� dizi[k] ya ata
		if(dizi[k]>top/12)//ortalamadan b�y�k olanlar if d�ng�s�ne girer k���k olanlar girmez
		{
			cout<<dizi[k]<<endl;//ort b�y�k olanlar� yazd�r�r
			c++;//ka� eleman ort b�y�k sayac�
		}
		cout<<"toplam "<<c<<" adet sayi buyuktur";//ekrana yazd�rma
		cin>>b;
}