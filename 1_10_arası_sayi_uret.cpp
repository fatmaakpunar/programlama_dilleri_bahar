#include <iostream>
#include <time.h>
using namespace std;
void main()
{
int a , b , c;
srand(time(0));
b=rand () %11 ;// 1 ile 10  aras� say� �retir
c=rand () %11 ;
cout<<"b="<<b<<" "<<"c="<<c<<" b+c"<<b+c;
cin>>a;
}