#include<iostream>
#include<time.h>
using namespace std;
void main()
{
	int i,j,sat,sut=0,top=0,t=0;
	int mat [6][6];//hata verirse
	srand(time(0));
	for(i=0;i<=5;i++)
	{
			for(j=0;j<=5;j++)
			{
				mat[i][j]=rand()%9;//0 ile 8 arasýnda
				//düzgün köþegen
				if(i==j) top=top+mat[i][j];
				//köþegen toplamlarý
				cout<<mat[i][j]<<" ";
				//köþegen toplamý buraya yazýlsaydý çalýþýrdý
				
				//ters köþegen
				if(i+j==5) t=t+mat[i][j];
				
			}
			cout<<endl;
			//bura yazarsak yanlýþ sonuç verir döngü dýþýnda kalýr satýr atlama bu alana bir þey yazýlmaz
	}
	cout<<"duz kosegen toplami="<<top<<endl;
		cout<<"ters kosegen toplami="<<t<<endl;
	cin>>i;
	//dizi toplamý
}
