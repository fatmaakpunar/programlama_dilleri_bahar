#include<iostream>
#include<time.h>
using namespace std;
void main()
{
	//havaya at�lan paran�n yaz� yada tura gelme olas�l��� 
	int a,b,t=0,say,c=0,i;
	srand(time(0));
	cout<<"para havaya ka� kez at�lacak?";
	cin>>a;
	for(i=1;i<=a;i++)
	{
		b=rand()%2;//0 ya da 1 i�in
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