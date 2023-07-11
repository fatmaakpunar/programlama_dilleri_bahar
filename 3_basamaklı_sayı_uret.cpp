//rakamlarý birbirinden farklý 3 basamaklý sayý üreten ve ne kadra ürettiðini yazdýran program
#include<iostream>
using namespace std;
void main()
{
	int a,b,c,d,f=0,g;
	for(a=100;a<=999;a++)
	{
		b=a/100;//100 ler basamaðý 999/100=9 
		c=(a%100)/10;//10 lar basamaðý 99 
		d=a%10;//birler basamaðý 9 
		if(b!=c && b!=d && c!=d) //birbirinden farklý olmasý için 
         cout<<a<<" "<<endl;
		f++;
	}
	cout<<f<<" adet veri vardir"<<endl;
	cin>>f;
}