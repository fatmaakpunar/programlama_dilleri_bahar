#include<iostream> // include dosyay� program�m�za tan�t�lmas�n� sa�lar.
// iostream Uygulamam�z�n klavyeden, dosyadan vs. girdi; ekrana ya da bir dosyaya ��kt� vermesini sa�lar.
#include<time.h> //
using namespace std; //Bu sat�rda using kodu cout<< KOMUTUNU tan�mlamak i�in kullan�ld�.
void main () //C , C ++ genellikle de�i�ken yada sabit atamalar� main blo�undan sonra beklenir
{
	int a=15,b=0; // a ve b ye de�er atad�k
	a=++b; // a=b+1 yani a=1 olur ayn� zamanda b yi artt�rd���m�z i�in b=1 olur
	cout<<"a="<<a<<"b="<<b   ;  // a y� ve b yi ekrana yazd�r�r
    cin>>a; // ��kt� ekranda dursun 
}


