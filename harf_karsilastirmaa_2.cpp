#include <iostream>
using namespace std;
void main( )
{ 
	int sonuc;

char ilk[40]="77arslan";
char ikinci[40]="79akibet";
 
sonuc = strcmp( ilk, ikinci );//-
cout<< sonuc<<endl;

sonuc = strncmp( ilk, ikinci, 9 );//en baþta 7<9 olduðu için eksi deðer çalýþtýrýr
cout<< sonuc;

cin>>sonuc;
}
//boþluk 255. karakter en büyük karakter alt+numlockaçýkken 255 yapýnca oluþan boþluk
//her zaman harf sayýdan büyüktür
//rakamlar 48-57 arasýnda, karekterler 65-90 arasýndadýr