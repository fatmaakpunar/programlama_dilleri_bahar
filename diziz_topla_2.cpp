#include <iostream>
#include <time.h>
using namespace std;
void main()
{
int dizi[15] = {100, 2, 3, 4, 5,6,24, 2, 115,8,3,1}; 
int b=0,c=0,top=0;
for (int b=3;b<6;++b)//4 5 6
	//c++;
cout<<dizi[b]<<endl;//dizi[3]=4,dizi[4]=5,dizi[5]=6
			top=top+dizi[b];//dizi toplamý 
cin>>b;
}
