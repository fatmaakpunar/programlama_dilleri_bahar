#include<iostream> // include dosyayý programýmýza tanýtýlmasýný saðlar.
// iostream Uygulamamýzýn klavyeden, dosyadan vs. girdi; ekrana ya da bir dosyaya çýktý vermesini saðlar.
#include<time.h> //
using namespace std; //Bu satýrda using kodu cout<< KOMUTUNU tanýmlamak için kullanýldý.
void main () //C , C ++ genellikle deðiþken yada sabit atamalarý main bloðundan sonra beklenir
{
	int a=15,b=0; // a ve b ye deðer atadýk
	a=++b; // a=b+1 yani a=1 olur ayný zamanda b yi arttýrdýðýmýz için b=1 olur
	cout<<"a="<<a<<"b="<<b   ;  // a yý ve b yi ekrana yazdýrýr
    cin>>a; // çýktý ekranda dursun 
}


