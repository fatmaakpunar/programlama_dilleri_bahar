#include<iostream>
#include<time.h>
using namespace std;
int a=5;
void main()

{
	
	int a=7;
	cout<<a<<endl;//7
	cout<<::a<<endl;//5 iki nokta globali çalýþtýrýr
	cout<<::a+a<<endl;//5+7=12
	cout<<::a+::a<<endl;//5+5 =10
	cout<<::a+a++<<endl;//12
	cin>>a;

}
