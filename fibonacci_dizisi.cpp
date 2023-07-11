#include<iostream>
#include<time.h>
using namespace std;
void main()
{
	int a,b,c,d;
	//fibonacci dizisinin ilk yirmi terimini bulalým
	a=1;b=1;//ilk 2 terim
	cout<<a<<"  "<<b<<endl;
	for (d=3;d<=20;d++)//ilk 2 terimi biz bulduk o yüzden 3.den baþlatýrýz
	{
		c=a+b;//c=2 3 5 8 13...
	a=b;//a=1 2 3 5 8...
	b=c;//b=2 3 5 8 13...
	cout<<c<<endl;//2 3 5 8 13...
	}
	cin>>c;
}