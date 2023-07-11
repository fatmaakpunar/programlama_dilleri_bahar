//üretilen 6*6 lýk matris
#include<iostream>
#include<time.h>
using namespace std;
void main()
{
	int i,j,sat,sut=0,top=0;
	int mat[6][6];//hata verirse 
	srand(time(0));
	cout<<"hangi sayi bulunsun="<<endl;
	cin>>sat;//kullanýcý veri girsin 
	for(i=0;i<6;i++)//i=0
	 for(j=0;j<6;j++)//j=0
		 mat[i][j]=rand()%10;//randomize mat[0][0]=random bir sayý
	//yazdýrma
	for(i=0;i<6;i++)//i=0
	{
	 for(j=0;j<6;j++)//j=0
	 { //mat[0][0] verisi için döndür
		 if(sat==mat[i][j]) sut++;//mat[0][0]=sat ise sut++ bir arttýr yani kaç tane sat verisinden var onu bulur
		 cout<<mat[i][j]<<" ";//sayýlarý yazdýr arasýna boþluk býrak
		 top=top+mat[i][j];//matris toplamý
	 }
	 cout<<endl;//satýr baþý
	}
	cout<<"toplam="<<top<<endl;//toplamý yazýdr
	cout<<sat<<" verisinden= "<<sut<<" tane vardir"<<endl;//kullanýcýn istediði veriden kaç tane var yazdýr
    cin>>i;
}
