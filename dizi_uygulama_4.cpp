#include<iostream>
#include<time.h>
using namespace std;
void main()
{
	int dizi[]={1,2,3,4,-5,6,0,-1,2,7,3,1,9,3,7};
	int i,j,k,m,n,tut,top;
	top=0;
	for(k=0;k<=12;k++)//d�ng� k=12 olana kadar d�ner k=12 oldu�unda bir kez daha u�rad��� i�in k++ dan 13 olur fakat bu sefer top k�sm�na u�ramaz d�ng� bitti�i i�in
		top=top+dizi[k];//top=32
	if(k!=13) goto son ;//top dan sonra geldi�i i�in bu sat�ra hi� u�ramaz
	son:
		cout<<dizi[k]<<endl;//dizi[13]=3
		
		cin>>i;
}