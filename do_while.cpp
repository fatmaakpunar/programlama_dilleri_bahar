#include<iostream>
#include<time.h>
using namespace std;
void main ()
{
	int a=0,b,c,d,e=0;
	cout<<"hangi sayida duralim";
	cin>>c;
	//do while kural� ifade son sat�rda kontrol edilir
	//i�lem en az bir kez �al���r
	//2 say� �retelim bu iki say�dan biri bizim istedi�imiz say� ise dursun
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