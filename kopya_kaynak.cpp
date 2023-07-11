#include <iostream>
using namespace std;
void main( )
{
char kaynak[30]="merhaba dünya";
char kopya[30] = "3456890";
strncpy( kopya, kaynak, 5 );//birleþtirerek kopyalar merha90
cout<< kopya ; 
cin>>kaynak;
}
