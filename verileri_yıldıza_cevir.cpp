//verilerin * simgesi ile gösterilmesi
#include<iostream>
using namespace std;
void main ()
{
	int cevap,sinif,j,i;
	int a[]={5,9,2,7,1,4,5,0,9,10,11};
	int frek[11]={0};//sýfýrlamak için 
	cout<<"veriler \n";
	for(i=0;i<=11-1;i++)//a[i] dizisi a[0]=5 , a[1]=9
	{
		cout<<a[i];//a[0]=5 ,a[1]=9 ekrana sayýyý yazdýrýr
		//*yazdýrma
		for(j=1;j<=a[i];j++)//1 den a[0]=5 e kadar döngüyü döndür,1 den a[1]=9 e kadar döngüyü döndür
			cout<<'*';//her döndüðünde 1 yýldýz alýr 
		cout<<"\n";//endl satýr atlamak için endl görevi görür
	}
	cin>>cevap;
}
//a[i]+1 dizideki her sayýya 1 ekler
