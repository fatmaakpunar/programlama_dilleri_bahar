#include <iostream>
using namespace std;
void main()
{
	int dizi[13]={1,2,3,4,-5,6,0,-1,2,7,3,1,9};//SS
	int i,j,k,m,n,tut,top;
	top=0;
	for(k=0;k<=12;k++)
		top=top+dizi[k];//dizi toplam�
	cout<<"ortalama"<<top/13.0<<endl;//ortalama hesab� ve ekrana yazd�rma
	cout<<" k="<<k<<endl;//dizi[k] da ka� veri var
//kar��la�t�rma
	for(i=0;i<=12;i++)//say�lar b�y�kten k����e s�ralans�n
		for(j=0;j<=12;j++)
			if(dizi[i]>dizi[j])
			{
				tut=dizi[i];
				dizi[i]=dizi[j];
	             dizi[j]=tut;
			}
				 //yazd�rma sat�r� 
			for(n=0;n<=12;n++)
				if(dizi[n]>top/13.0)
				cout<<n+1<<". veri="<<dizi[n]<<endl;
	cin>>k;
}
