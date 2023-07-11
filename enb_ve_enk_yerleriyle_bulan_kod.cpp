//6 sayý üretip enb ve enk yerleriyle bulan kod
#include<iostream>
#include<time.h>
using namespace std;
void main()
{
	int a,h;
	srand (time(0));
	int enb=0,enk=100,sk=0,sb=0;
	for(a=1;a<=6;a++)
	{
		h=rand()%101;
		//enb ve yeri
		if(h>enb)
		{
			enb=h;
		sb=a;
		}
	//enk ve yeri
	if(h<enk)
	{
	enk=h;
	sk=a;
	}
	cout<<h<<endl;
	}
	cout<<"en buyuk="<<enb<<" en buyugun yeri="<<sb<<" en kucuk="<<enk<<" en kucugun yeri="<<sk<<endl;
	cin>>a;
}
