#include<iostream>
using namespace std;
void main()
{
	int i;
	for(i=3;i<10;i++)//3 den 10 a kadar say� �ret
{
	if(i!=3) goto alt;//e�er say� 3 e e�it de�ilse "alt" a git
		cout<<i<<" ";//3 � yazd�r yan�na bo�luk b�rak
}
alt:
	for(i=1;i<10;i++)//1 2 3 4 6 7 8 9
	{
		if(i==5)
			continue;//say� 5 olunca sonraki ad�ma atla
		cout<<i<<endl;
	}
	cin>>i;
}