#include <iostream>
using namespace std;
void main(){
 char islem;
 int s1, s2, s3;
 cout<<"once islemi sonra sayilari girin ";
 cin>>islem>>s1>>s2;//* 7 4
 s2=s1;//7
 switch (islem) {
  s2=5;// döngü içinde olduðu için deðiþiklik yaratmaz
 case '+' : s3 = s1 + s2; //break;
 case '-' : s3 = s1 - s2; break;
 case '*' : s3 = s1 * s2; //break;// break kapalý olursa alttaki iþleme geçer 
 case '/' : s3 = s1 / s2; break;// küsürlü çýkarsa tam kýsmýný alýr
 default : cout<<"Hatalý iþlem"; }
 cout<<"\nSonuc = "<<s3 + s2;// 8 çýkar
cin>>s1;
}