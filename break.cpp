#include<iostream>
using namespace std;
void main()
{
	int a=0,b=0,c=2,i=1,Y=0;
	do
	{
		i=i+2;//1+2=3
		if(i==5)//i=5 olunca while sona erer
		{
			break;
			Y++;
		}
		cout<<i+c<<endl;//3+2 
	}
	while(2>4);
	//cout<<i+c;//boþ ekran
	cin>>i;
}