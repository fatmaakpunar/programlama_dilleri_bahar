//continue ve break �rne�i
#include<iostream>
using namespace std;
void  main()
{
	int i;
	for(i = 1 ; i < 10 ; i++)//1 den 10 kadar say�lar� �ret
      { 
		  if (i == 5)//say� 5 olunca
			  break;//dur
          cout<< i; //yazd�r
	 }
    for(i = 1 ; i < 10 ; i++)//1 den 10 a kadar say�lar� �ret 
        { 
			if (i == 5)//say� 5 olunca 
            continue;//sonraki d�ng� ad�m�na atla
            cout<< i;//yazd�r
	  }
	cin>>i;
}