#include<iostream>
#include<time.h>
using namespace std;
void main()
{
	int dizi[13]={1,2,3,4,-5,6,0,-1,2,7,3,1,9};
	int i,j,k,m,n,tut,top;
	top=0;
	for(k=0;k<=12;k++)
		top=top+dizi[k];//dizideki verilerin toplamý
	cout<<"ortalama= "<<top/13.0<<endl;//ortalama hesabý ve ekrana yazdýrma
	cout<<" k="<<k<<endl;//dizi[k] daki veri sayýsý
	//karþýlaþtýrma ??
	for(i=0;i<=12;i++)
		for(j=0;j<=12;j++)
			if(dizi[i]<dizi[j])
			{
				tut=dizi[i];
				dizi[i]=dizi[j];
				dizi[j]=tut;
			}
			//ortalamadan büyükleri sýralý yazdýrma satýrý 
			for(n=0;n<=12;n++)
				if(dizi[n]>top/13.0)
					cout<<n+1<<".veri= "<<dizi[n]<<endl;
			cin>>n;

}