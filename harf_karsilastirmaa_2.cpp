#include <iostream>
using namespace std;
void main( )
{ 
	int sonuc;

char ilk[40]="77arslan";
char ikinci[40]="79akibet";
 
sonuc = strcmp( ilk, ikinci );//-
cout<< sonuc<<endl;

sonuc = strncmp( ilk, ikinci, 9 );//en ba�ta 7<9 oldu�u i�in eksi de�er �al��t�r�r
cout<< sonuc;

cin>>sonuc;
}
//bo�luk 255. karakter en b�y�k karakter alt+numlocka��kken 255 yap�nca olu�an bo�luk
//her zaman harf say�dan b�y�kt�r
//rakamlar 48-57 aras�nda, karekterler 65-90 aras�ndad�r