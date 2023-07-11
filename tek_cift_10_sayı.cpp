//10 sayý içinde tek ve çift sayýlarýn adetlerini bul
#include<iostream>
#include<time.h>
using namespace std;
void main()
{
	int a,b,c=0,d,f=0,t=0,tt=0,ct=0;
	srand(time(NULL));//RANDOMÝZE ANLAMINDADIR
	for(a=1;a<=10;a++)//baþlangýç adýmý,bitiþ koþulu,artýþ miktarý 1 den 10 kadar 1er 1er artan 10 sayý
	{
		b=rand()%101;//100 ekadar rastgele sayý
		if(b % 2==0)// kalan 0 a eþitse çift 
		{
			c++;//sayýnýn adetini gösterir
			cout<<c<<".cift="<<b<<endl;//b sayýyý gösterir rastgele çift sayý
			ct=ct+b;//çiftlerin toplamý
		}
		else//deðilse tek
		{
			t++;
			cout<<t<<".tek="<<b<<endl;
			tt=tt+b;//teklerin toplamý
		}
		
	}
	cout<<"tek sayý adedi="<<t<<" cift sayý adedi="<<c<<endl;
	cout<<"tek sayý toplamý="<<tt<<" cift sayý toplamý="<<ct<<endl;
	cin>>a;
}

