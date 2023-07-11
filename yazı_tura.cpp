#include<iostream>
#include<time.h>
using namespace std;
void main()
{
	//havaya atýlan paranýn yazý yada tura gelme olasýlýðý 
	int a,b,t=0,say,c=0,i;
	srand(time(0));
	cout<<"para havaya kaç kez atýlacak?";
	cin>>a;
	for(i=1;i<=a;i++)
	{
		b=rand()%2;//0 ya da 1 için
		if(b==0)
		{
			cout<<"tura="<<b<<endl;
			t++;
		}
		else
		{
			cout<<"yazi="<<b<<endl;
		c++;
		}
	}
		cout<<"yazi orani="<<100.0*c/a<<endl;
		cout<<"tura orani="<<100.0*t/a<<endl;
		cin>>c;
}