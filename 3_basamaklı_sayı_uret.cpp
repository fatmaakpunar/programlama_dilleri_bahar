//rakamlar� birbirinden farkl� 3 basamakl� say� �reten ve ne kadra �retti�ini yazd�ran program
#include<iostream>
using namespace std;
void main()
{
	int a,b,c,d,f=0,g;
	for(a=100;a<=999;a++)
	{
		b=a/100;//100 ler basama�� 999/100=9 
		c=(a%100)/10;//10 lar basama�� 99 
		d=a%10;//birler basama�� 9 
		if(b!=c && b!=d && c!=d) //birbirinden farkl� olmas� i�in 
         cout<<a<<" "<<endl;
		f++;
	}
	cout<<f<<" adet veri vardir"<<endl;
	cin>>f;
}