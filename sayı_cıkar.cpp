//1 den 10 a kadar say�lar� 3 ve 5 d���nda yazd�ral�m
#include <iostream>
using namespace std;
void main ()
{
	int a=0,b=0,c=0,i=0;
	while(i<10)//10 dan k���k say�lar� s�ralar
	{
		i=i+1;//0+1 1+1 2+1 ...
		if(i==3||i==5)//i 3 ve 5 e e�itse 
			continue;//bir sonraki d�ng� ad�m�na atla
		cout<<i<<endl;
	}
	cin>>i;
}