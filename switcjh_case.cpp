#include <iostream>
using namespace std;
void main(){
 char islem;
 int s1, s2, s3;
 cout<<"once islemi sonra sayilari girin ";
 cin>>islem>>s1>>s2;//* 7 4
 s2=s1;//7
 switch (islem) {
  s2=5;// d�ng� i�inde oldu�u i�in de�i�iklik yaratmaz
 case '+' : s3 = s1 + s2; //break;
 case '-' : s3 = s1 - s2; break;
 case '*' : s3 = s1 * s2; //break;// break kapal� olursa alttaki i�leme ge�er 
 case '/' : s3 = s1 / s2; break;// k�s�rl� ��karsa tam k�sm�n� al�r
 default : cout<<"Hatal� i�lem"; }
 cout<<"\nSonuc = "<<s3 + s2;// 8 ��kar
cin>>s1;
}