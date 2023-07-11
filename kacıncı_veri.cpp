#include<iostream>
#include<time.h>
using namespace std;
void main()
{
	int a=0,b=0,c=0,d,k;
	srand(time(0));
	do 
	{
		b=rand()%10+1;
		cout<<b<<endl;
		if(b==2)
		{
			c++;
			cout<<c<<".veri*********"<<endl;
		}
	}
	while(c!=2);
	cin>>c;
}