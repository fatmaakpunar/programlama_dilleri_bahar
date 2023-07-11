#include <iostream>
using namespace std;
void main( )
{ 
	int sonuc;
    char ilk[40]="ahmet";
    char ikinci[40]="ahsen";

    sonuc = strcmp( ilk, ikinci);//negatif bir deðer döndürecektir Çünkü "ahmet" kelimesi alfabede "ahsen" kelimesinden önce gelir; dolayýsýyla küçüktür
    cout<< sonuc<<endl;

    sonuc = strncmp( ilk, ikinci, 2 );//Her iki kelimeyin ilk üç harfi aynýdýr ve fonksiyonda sadece ilk üç harfin karþýlaþtýrýlmasýný istediðimizi belirttik. Dolayýsýyla karþýlaþtýrmanýn sonucunda 0 döndürülmesi normaldir
    cout<< sonuc;

    cin>>sonuc;
}