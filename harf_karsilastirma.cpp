#include <iostream>
using namespace std;
void main( )
{ 
	int sonuc;
    char ilk[40]="ahmet";
    char ikinci[40]="ahsen";

    sonuc = strcmp( ilk, ikinci);//negatif bir de�er d�nd�recektir ��nk� "ahmet" kelimesi alfabede "ahsen" kelimesinden �nce gelir; dolay�s�yla k���kt�r
    cout<< sonuc<<endl;

    sonuc = strncmp( ilk, ikinci, 2 );//Her iki kelimeyin ilk �� harfi ayn�d�r ve fonksiyonda sadece ilk �� harfin kar��la�t�r�lmas�n� istedi�imizi belirttik. Dolay�s�yla kar��la�t�rman�n sonucunda 0 d�nd�r�lmesi normaldir
    cout<< sonuc;

    cin>>sonuc;
}