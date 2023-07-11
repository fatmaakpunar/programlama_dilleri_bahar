// (and kullanýmý) üretilen sayýlardan bir tanesi 10 çýktýðýnda program duracak
#include <time.h>
#include <iostream>
using namespace std;
void main()
{
   int a=0,c=0,i=0;
   srand(time(NULL));
   do
   {
      a=rand() % 10 + 1;
      c=rand() % 10 + 1;
      cout<<"a="<<a <<"c= "<<c<<endl;
      i=i+1;//dönüþ sayýsý 
      cout<<i<<".ci donus"<<endl;
   }
   while (a!=10 && c!=10);
   cin>>a;
}