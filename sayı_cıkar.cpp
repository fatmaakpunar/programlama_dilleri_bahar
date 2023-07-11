//1 den 10 a kadar sayýlarý 3 ve 5 dýþýnda yazdýralým
#include <iostream>
using namespace std;
void main ()
{
	int a=0,b=0,c=0,i=0;
	while(i<10)//10 dan küçük sayýlarý sýralar
	{
		i=i+1;//0+1 1+1 2+1 ...
		if(i==3||i==5)//i 3 ve 5 e eþitse 
			continue;//bir sonraki döngü adýmýna atla
		cout<<i<<endl;
	}
	cin>>i;
}