#include <iostream>
//#include<time.h>
using namespace std;
void main()
{
	int dizi[13]={1,2,3,4,5,6,1,-1,2,7,3,0,9};
	int i,j,k,m,n,tut;
	//karþýlaþtýrma
	for(i=0;i<=12;i++)
		for(j=0;j<=12;j++)
			if(dizi[i]>dizi[j])//sayýlarý büyükten küçüðe yazdýrýr
			{
				tut=dizi[i];
				dizi[i]=dizi[j];
	             dizi[j]=tut;
			}
				 //yazdýrma satýrý 
			for(n=0;n<=12;n++)
				cout<<n+1<<". veri="<<dizi[n]<<endl;
			//cout<<dizi[3];
	cin>>i;
}