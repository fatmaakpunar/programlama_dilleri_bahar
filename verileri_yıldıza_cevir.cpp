//verilerin * simgesi ile g�sterilmesi
#include<iostream>
using namespace std;
void main ()
{
	int cevap,sinif,j,i;
	int a[]={5,9,2,7,1,4,5,0,9,10,11};
	int frek[11]={0};//s�f�rlamak i�in 
	cout<<"veriler \n";
	for(i=0;i<=11-1;i++)//a[i] dizisi a[0]=5 , a[1]=9
	{
		cout<<a[i];//a[0]=5 ,a[1]=9 ekrana say�y� yazd�r�r
		//*yazd�rma
		for(j=1;j<=a[i];j++)//1 den a[0]=5 e kadar d�ng�y� d�nd�r,1 den a[1]=9 e kadar d�ng�y� d�nd�r
			cout<<'*';//her d�nd���nde 1 y�ld�z al�r 
		cout<<"\n";//endl sat�r atlamak i�in endl g�revi g�r�r
	}
	cin>>cevap;
}
//a[i]+1 dizideki her say�ya 1 ekler
