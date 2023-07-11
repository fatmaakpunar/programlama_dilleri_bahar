#include<iostream>
#include<time.h>
using namespace std;
void main ()
{
	int a=0,b,c,d,e=0;
	cout<<"hangi sayida duralim";
	cin>>c;
	//do while kuralý ifade son satýrda kontrol edilir
	//iþlem en az bir kez çalýþýr
	//2 sayý üretelim bu iki sayýdan biri bizim istediðimiz sayý ise dursun
	srand(time(0));
	do
	{
		e++;
		b=rand()%101;
		d=rand()%101;
		cout<<"b="<<b<<" d="<<d<<endl;
	}
	while(b!=a || d!=a);		
	cin>>a;
}