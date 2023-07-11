//if yapısı ile rasgele 0- 9 arasında sayı üretmek
#include <iostream>
using namespace std;
#include <time.h>
void main()
{
int a,b,c;
srand ( time (0) );// randomize
a=(rand() %8)+6;//6 ile 13    6 7  8 9 10 11 12 13 
b=(rand()%8)+6;
c=(rand()%11);
	
cout<<"a="<<a<<" b="<<b<<endl;
if (a>b) cout<< a<<">"<<b;
else
if (a<b)
cout<< a<<"<"<<b;
else
cout<<a<<" ="<< b;// elsesiz olmaz
cout<<"c"<<c;
cin >> a;
}