#include <iostream>
using namespace std;
void main( )
{
char kaynak[30]="merhaba d�nya";
char kopya[30] = "3456890";
strncpy( kopya, kaynak, 5 );//birle�tirerek kopyalar merha90
cout<< kopya ; 
cin>>kaynak;
}
