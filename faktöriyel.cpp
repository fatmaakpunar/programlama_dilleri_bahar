//faktoriyel uygulamas�
#include<iostream>
using namespace std;
void main()
{
	int i=0,faktor=1,k;
	cout<<"hangi sayinin faktoru?";//k=6 olsun 
	cin>>k;//soruyu k de�i�kenine atad�k 
	while(k>i)//k>0 sa i�lem yapar k<i yazarsak sonu� k ka� olursa olsun 1 ��kar ��nk� ba�ta faktor=1 ald�k.
	{
		i++;//i yi d�ng�de 1 artt�r�r
		faktor=faktor*i;//1*2*3*4*5*6=720
	}
	cout<<k<<"verisi icin sonuc= "<<faktor;//ekrana sonucu yazd�r�r
	cin>>k;//visual studio i�in ��kt� ekranda dursun diye
}