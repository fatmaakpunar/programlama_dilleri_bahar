#include<iostream>
#include<time.h>
using namespace std;
int a=5;//global
void main()
{
	int a=8,b,c;
	c=a++;//c=8 a=9
	b=++a;//b=9  a=9 byi aya e�itledim a y�da bir artt�rd�m o y�zden 9 oldu
    cout<<::a+b<<endl;//15 olur ��nk� c=a++ i�leminde a i�lemden sonra bir artar yani c a olurken a y� bir artt�r�r.
	cout<<::a+c<<endl;//13
	cout<<::a+a<<endl;//15 yukarda a y� bir artt�rd�m
	cin>>a;

}