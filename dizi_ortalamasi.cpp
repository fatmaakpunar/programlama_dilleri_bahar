//dizilerle ilgili uygulama örnekleri
//dizinin ortalamasýný bulup ortalamadan büyük elemanlarý yazdýran program
#include<iostream>
#include<time.h>
using namespace std;
void main()
{
	int dizi[]={1,2,3,4,5,6,1,1,2,7,3,1};
	int b=0,c=0,top=0,k;
	for(b=0;b<12;++b)//dizi elemanlarýný dizi[b] ata
		top=top+dizi[b];//dizideki sayýlarýn toplamý
	//ortalama hesabý
	cout<<"ort="<<top/12.0<<endl;//dizi ortalamasý *11 düzeltilid 12*
	for(k=0;k<12;++k)//dizi elemanlarýný dizi[k] ya ata
		if(dizi[k]>top/12)//ortalamadan büyük olanlar if döngüsüne girer küçük olanlar girmez
		{
			cout<<dizi[k]<<endl;//ort büyük olanlarý yazdýrýr
			c++;//kaç eleman ort büyük sayacý
		}
		cout<<"toplam "<<c<<" adet sayi buyuktur";//ekrana yazdýrma
		cin>>b;
}