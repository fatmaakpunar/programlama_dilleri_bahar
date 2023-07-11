//Farklý bir sýralama
#include <iostream>
using namespace std;
void main()
{
	 signed int n=15;
int i,d[100];
 int e[1000]={0};
cout<<"dizinin boyutunu giriniz : ";
cin>>n;
 cout<<"\n\nElemanlar\n--------------\n";
 // bilgi girisi
 for( i=0; i<n; i++ )
 { cout<<i+1<<".eleman : ";
 cin>>d[i]; } // en buyuk en kucuk elemanlari
 int enbuyuk, enkucuk;
 enbuyuk=d[0];
 enkucuk=d[0];
 for( i=0; i<n; i++ ){
 if( d[i] > enbuyuk )
 enbuyuk = d[i]; }
 for( i=0; i<n; i++ )
 { if( d[i] < enkucuk )
 enkucuk = d[i]; }
 for( i=0; i<n; i++ ){
 e[d[i]]++; }
 // ekrana basalim
 for( int j=enkucuk; j<=enbuyuk; j++ ){
 if( e[j] > 0 ) { //basýlmayan sayýlarý yoksaydýk
 cout<<"\n"<<" "<<j<<" " <<" elemanindan"<<" "<< e[j]<<"tane var.";}}
cin>>i;
}