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
				mat[i][j]=rand()%9;//0 ile 8 aras�nda
				//d�zg�n k��egen
				if(i==j) top=top+mat[i][j];
				//k��egen toplamlar�
				cout<<mat[i][j]<<" ";
				//k��egen toplam� buraya yaz�lsayd� �al���rd�
				
				//ters k��egen
				if(i+j==5) t=t+mat[i][j];
				
			}
			cout<<endl;
			//bura yazarsak yanl�� sonu� verir d�ng� d���nda kal�r sat�r atlama bu alana bir �ey yaz�lmaz
	}
	cout<<"duz kosegen toplami="<<top<<endl;
		cout<<"ters kosegen toplami="<<t<<endl;
	cin>>i;
	//dizi toplam�
}
