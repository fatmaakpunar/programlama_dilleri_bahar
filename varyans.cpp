//varyans hesab�
//istenilen miktarda ��rencinin notunu �retip varyans�n�n bulunmas�
#include<iostream>
#include<time.h>
#include<math.h>//fabs,sqrt komutlar� i�in 
using namespace std;
void main()
{
	int score[100];
	int sayi=0;
	float ortalama,varyans,stdsapma;
	float toplam =0.0,kareli_toplam=0.0,abs_toplam=0.0;//standart 0 aras�nda fark var m�
	int i=0;
	srand(time(0));//randomize i�in 
	cout<<"kac ogrenci=";
	cin>>sayi;//kullan�c� veri girsin
	for (i=0;i<sayi;i++)// 0 dan sayi ya kadar d�ng�y� d�nd�r
	{
		score[i]=rand()%101;//RANDOM�ZE
		cout<<i+1<<". ogrencinin notu="<<score[i]<<" "<<endl;//1. ��rencinin notu=random bir say�
		toplam=toplam+score[i];//notlar� toplar
	}
	cout<<"******************************"<<endl;
	//ortalama hesab�
	ortalama=toplam/sayi;
	//kareli toplamlar hesab�
    for (i=0;i<sayi;i++)
	{
		kareli_toplam=kareli_toplam+(score[i]-ortalama)*(score[i]-ortalama);
	}
	//varyans hesab�
	varyans=kareli_toplam/(sayi-1);
	stdsapma=sqrt(varyans);
	//yazd�rmalar
	cout<<"ortalama="<<ortalama<<" "<<"varyans="<<varyans<<" "<<"stdsapma="<<stdsapma<<endl;
	cin>>sayi;
}