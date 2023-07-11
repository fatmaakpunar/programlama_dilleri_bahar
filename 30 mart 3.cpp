#include<iostream>
using namespace std;
void main()
{
	int i;
	for(i=3;i<10;i++)//3 den 10 a kadar sayý üret
{
	if(i!=3) goto alt;//eðer sayý 3 e eþit deðilse "alt" a git
		cout<<i<<" ";//3 ü yazdýr yanýna boþluk býrak
}
alt:
	for(i=1;i<10;i++)//1 2 3 4 6 7 8 9
	{
		if(i==5)
			continue;//sayý 5 olunca sonraki adýma atla
		cout<<i<<endl;
	}
	cin>>i;
}