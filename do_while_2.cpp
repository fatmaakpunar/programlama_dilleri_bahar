//0-100 arasý 3 e bölünen 10 sayýyý bulalým do while ile
#include<iostream>//kütüphane dosyayý tanýmlar
#include<time.h>//time kullanabilmek için yani random
using namespace std;//cout gibi ifadeleri tanýmlar 
void main()//sabitlerin yerel olduðunu anlamak için
{
	int a=0,d;//a yý program yeniden çalýþýnca 0 lansýn diye a=0 dedik
	srand(time(NULL));//randomize kullanabilmek için 
	do 
	{
		
		d=rand()%101;//random 0-100 arasý sayý üretir
		if(d%3==0)// þartýmýz 3 ile bölünen sayýlar üretsin 
		{
			cout<<"3 e bolunen sayi="<<d<<endl;//ekrana yazdýrýr
		a++;//kaçýncý sayý olduðunu anlamak için
		}}
	while(a<10);// 10 sayý üretsin
	cin>>a;//ekran dursun diye
}