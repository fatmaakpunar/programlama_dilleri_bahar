#include<iostream>
using namespace std;
void main()
{
	int a=0,b,c=0,d;
    while(a<21)
    {
		cout<<"sayi gir=";//10,11 
		cin>>b;//b=10,b=11
        a=a+b;//a=0+10,a=10+11=21
        c=c+1;//c=1,c=2
    }//þart saðlandý döngüden çýkar
    cout<<"toplam ="<<a<<" "<<c<<"adet sayi girdiniz";//toplam=21 2 adet sayý girdiniz
	cin>>a;
}
