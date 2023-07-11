#include<iostream>
using namespace std;
void main()
{
	int X,Y,Z=2;
	X=11;
	Y=++X;//Y=12,X=12
	X=Z;//X=2
	Y=X++;//X=3,Y=2
	cout<<"X="<<X<<" Y="<<Y+1;//X=3,Y=3
	cin>>X;
}