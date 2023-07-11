//ifelse.cpp
#include <iostream> // cin,cout,endl
#include <time.h>
using namespace std;
void main()
{
int not=40,say=0;
cout<< "Notu giriniz:";
cin >> not;
if (not >= 50)
{cout << "Geçti!";
say=say+1;}
else
cout << "Kaldi!";
cin >> not;		
}