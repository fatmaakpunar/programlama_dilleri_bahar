//faktoriyel uygulamasý
#include<iostream>
using namespace std;
void main()
{
	int i=0,faktor=1,k;
	cout<<"hangi sayinin faktoru?";//k=6 olsun 
	cin>>k;//soruyu k deðiþkenine atadýk 
	while(k>i)//k>0 sa iþlem yapar k<i yazarsak sonuç k kaç olursa olsun 1 çýkar çünkü baþta faktor=1 aldýk.
	{
		i++;//i yi döngüde 1 arttýrýr
		faktor=faktor*i;//1*2*3*4*5*6=720
	}
	cout<<k<<"verisi icin sonuc= "<<faktor;//ekrana sonucu yazdýrýr
	cin>>k;//visual studio için çýktý ekranda dursun diye
}