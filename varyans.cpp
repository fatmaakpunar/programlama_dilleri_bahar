//varyans hesabý
//istenilen miktarda öðrencinin notunu üretip varyansýnýn bulunmasý
#include<iostream>
#include<time.h>
#include<math.h>//fabs,sqrt komutlarý için 
using namespace std;
void main()
{
	int score[100];
	int sayi=0;
	float ortalama,varyans,stdsapma;
	float toplam =0.0,kareli_toplam=0.0,abs_toplam=0.0;//standart 0 arasýnda fark var mý
	int i=0;
	srand(time(0));//randomize için 
	cout<<"kac ogrenci=";
	cin>>sayi;//kullanýcý veri girsin
	for (i=0;i<sayi;i++)// 0 dan sayi ya kadar döngüyü döndür
	{
		score[i]=rand()%101;//RANDOMÝZE
		cout<<i+1<<". ogrencinin notu="<<score[i]<<" "<<endl;//1. öðrencinin notu=random bir sayý
		toplam=toplam+score[i];//notlarý toplar
	}
	cout<<"******************************"<<endl;
	//ortalama hesabý
	ortalama=toplam/sayi;
	//kareli toplamlar hesabý
    for (i=0;i<sayi;i++)
	{
		kareli_toplam=kareli_toplam+(score[i]-ortalama)*(score[i]-ortalama);
	}
	//varyans hesabý
	varyans=kareli_toplam/(sayi-1);
	stdsapma=sqrt(varyans);
	//yazdýrmalar
	cout<<"ortalama="<<ortalama<<" "<<"varyans="<<varyans<<" "<<"stdsapma="<<stdsapma<<endl;
	cin>>sayi;
}