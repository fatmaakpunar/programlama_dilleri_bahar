//�retilen 6*6 l�k matris
#include<iostream>
#include<time.h>
using namespace std;
void main()
{
	int i,j,sat,sut=0,top=0;
	int mat[6][6];//hata verirse 
	srand(time(0));
	cout<<"hangi sayi bulunsun="<<endl;
	cin>>sat;//kullan�c� veri girsin 
	for(i=0;i<6;i++)//i=0
	 for(j=0;j<6;j++)//j=0
		 mat[i][j]=rand()%10;//randomize mat[0][0]=random bir say�
	//yazd�rma
	for(i=0;i<6;i++)//i=0
	{
	 for(j=0;j<6;j++)//j=0
	 { //mat[0][0] verisi i�in d�nd�r
		 if(sat==mat[i][j]) sut++;//mat[0][0]=sat ise sut++ bir artt�r yani ka� tane sat verisinden var onu bulur
		 cout<<mat[i][j]<<" ";//say�lar� yazd�r aras�na bo�luk b�rak
		 top=top+mat[i][j];//matris toplam�
	 }
	 cout<<endl;//sat�r ba��
	}
	cout<<"toplam="<<top<<endl;//toplam� yaz�dr
	cout<<sat<<" verisinden= "<<sut<<" tane vardir"<<endl;//kullan�c�n istedi�i veriden ka� tane var yazd�r
    cin>>i;
}
