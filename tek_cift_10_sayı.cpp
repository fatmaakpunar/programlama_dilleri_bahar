//10 say� i�inde tek ve �ift say�lar�n adetlerini bul
#include<iostream>
#include<time.h>
using namespace std;
void main()
{
	int a,b,c=0,d,f=0,t=0,tt=0,ct=0;
	srand(time(NULL));//RANDOM�ZE ANLAMINDADIR
	for(a=1;a<=10;a++)//ba�lang�� ad�m�,biti� ko�ulu,art�� miktar� 1 den 10 kadar 1er 1er artan 10 say�
	{
		b=rand()%101;//100 ekadar rastgele say�
		if(b % 2==0)// kalan 0 a e�itse �ift 
		{
			c++;//say�n�n adetini g�sterir
			cout<<c<<".cift="<<b<<endl;//b say�y� g�sterir rastgele �ift say�
			ct=ct+b;//�iftlerin toplam�
		}
		else//de�ilse tek
		{
			t++;
			cout<<t<<".tek="<<b<<endl;
			tt=tt+b;//teklerin toplam�
		}
		
	}
	cout<<"tek say� adedi="<<t<<" cift say� adedi="<<c<<endl;
	cout<<"tek say� toplam�="<<tt<<" cift say� toplam�="<<ct<<endl;
	cin>>a;
}

