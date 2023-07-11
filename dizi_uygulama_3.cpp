#include<iostream>
#include<time.h>
using namespace std;
void main()
{
	int dizi[]={1,2,3,4,-5,6,0,-1,2,7,3,1,9,3,7};
	int i,j,k,m,n,tut,top;
	top=0;
	for(k=0;k<=12;k++)
		if(k!=3) goto son ;
		top=top+dizi[k];
	son:
		cout<<dizi[k]<<endl;

		cin>>i;
}