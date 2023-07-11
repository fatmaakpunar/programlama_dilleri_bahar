#include<iostream>
#include<time.h>
using namespace std;
void main()
//basamak sayýsý enb sayýyý bulalým
{
	int b,enb=0,sayi;
	cout<<"sayiyi girin";
	cin>>sayi;
	while(sayi>0)
	{
		b=sayi%10;//495 5 49%10=9 
		if (b>enb)
			enb=b;
		sayi=sayi/10;//49 9/10=0
		
	}
	cout<<"girilen sayinin en buyuk basamagi="<<enb<<endl;
	cin>>sayi;
}