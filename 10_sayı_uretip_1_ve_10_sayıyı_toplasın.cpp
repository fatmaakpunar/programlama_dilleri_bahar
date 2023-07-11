#include<iostream>
#include<time.h>
using namespace std;
void main()
{
	int  i,j,k,h,y;
	//10 sayý üretip 1. ve 10. sayýyý toplasýn
	srand(time(0));
		for(i=1;i<=10;i++)
		{
			h=rand()%101;
			if(i==1)
				k=h;
			cout<<h<<endl;
		}
		cout<<"************************************"<<endl;
		cout<<"birinci veri="<<k<<" sonuncu veri="<<h<<" iki verinin toplami="<<k+h<<endl;
		cin>>h;
}