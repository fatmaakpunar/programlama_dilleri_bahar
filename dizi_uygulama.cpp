#include<iostream>
#include<time.h>
using namespace std;
void main()
{
	int dizi[13]={1,2,3,4,-5,6,0,-1,2,7,3,1,9};
	int i,j,k,m,n,tut,top;
	top=0;
	for(k=0;k<=12;k++)//k=0,1,2,3,4,5,6,7,8,9,10,11,12
		top=top+dizi[k];//top=1,3,6,10,5,11,11,10,12,19,22,23,32
		cout<<" k="<<k<<endl;//k=13

		cin>>i;
}