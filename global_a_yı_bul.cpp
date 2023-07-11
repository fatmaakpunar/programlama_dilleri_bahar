#include<iostream>
#include<time.h>
using namespace std;
int a=5;//global
void main()
{
	int a=8,b,c;
	c=a++;//c=8 a=9
	b=++a;//b=9  a=9 byi aya eþitledim a yýda bir arttýrdým o yüzden 9 oldu
    cout<<::a+b<<endl;//15 olur çünkü c=a++ iþleminde a iþlemden sonra bir artar yani c a olurken a yý bir arttýrýr.
	cout<<::a+c<<endl;//13
	cout<<::a+a<<endl;//15 yukarda a yý bir arttýrdým
	cin>>a;

}