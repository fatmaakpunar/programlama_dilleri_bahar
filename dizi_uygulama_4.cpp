#include<iostream>
#include<time.h>
using namespace std;
void main()
{
	int dizi[]={1,2,3,4,-5,6,0,-1,2,7,3,1,9,3,7};
	int i,j,k,m,n,tut,top;
	top=0;
	for(k=0;k<=12;k++)//döngü k=12 olana kadar döner k=12 olduðunda bir kez daha uðradýðý için k++ dan 13 olur fakat bu sefer top kýsmýna uðramaz döngü bittiði için
		top=top+dizi[k];//top=32
	if(k!=13) goto son ;//top dan sonra geldiði için bu satýra hiç uðramaz
	son:
		cout<<dizi[k]<<endl;//dizi[13]=3
		
		cin>>i;
}