#include <iostream>
using namespace std;
void main(){
 char islem;
 int s1, s2, s3;
 cout<<"Önce iþlemi sonra sayýlarý girin ";
 cin>>islem>>s1>>s2;
 //s2=s1; döngünün dýþýnda iþleme alýr
 switch (islem) {
	 s2=5;//döngünün içinde olduðu için direkt atlar 
 case '+' : s3 = s1 + s2;// break; break kapanýnda alt satýra atlar
 case '-' : s3 = s1 - s2; //break;
 case '*' : s3 = s1 * s2; //break;
 case '/' : s3 = s1 / s2; break;
 default : cout<<"Hatalý iþlem"; }
 cout<<"\nSonuç = "<<s3+s2;cin>>s1;}