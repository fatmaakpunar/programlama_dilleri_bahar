#include <iostream>
using namespace std;
void main(){
 char islem;
 int s1, s2, s3;
 cout<<"�nce i�lemi sonra say�lar� girin ";
 cin>>islem>>s1>>s2;
 //s2=s1; d�ng�n�n d���nda i�leme al�r
 switch (islem) {
	 s2=5;//d�ng�n�n i�inde oldu�u i�in direkt atlar 
 case '+' : s3 = s1 + s2;// break; break kapan�nda alt sat�ra atlar
 case '-' : s3 = s1 - s2; //break;
 case '*' : s3 = s1 * s2; //break;
 case '/' : s3 = s1 / s2; break;
 default : cout<<"Hatal� i�lem"; }
 cout<<"\nSonu� = "<<s3+s2;cin>>s1;}