#include <iostream>
#include <time.h>
using namespace std;
void main()
{
int a=0, k=0;
srand(time(NULL)); //RANDOM�ZE ANLAMINDADIR
while (a<32767)// TAMSAYI SINIR T�P�N� ��RENME
{ 
k=k+1;
a=rand();
cout<<k<<" . veri="<<a<<endl;
}
cin>>a;
}
