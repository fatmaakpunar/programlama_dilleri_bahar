#include<iostream>
#include<time.h>
using namespace std;
void main()
{
	int a,b=0,c=0,sayi,i=0;
	//3 adet rastgele sayý üretelim 
	//2 ile 100 arasýnda
	srand(time(NULL));
	while(c<3)//c!=3 de our
	{
		a=rand()%99+2;//2 ile 100 arasý
		for(i=2;i<a;i++)
			if(a%i==0) break;//7%2=1
		    if(a==i)//7=7
			{
				c=c+1;
			cout<<a<<"sayisi asaldir"<<endl;
			}
			else
				b++;
	}
	cin>>a;
}