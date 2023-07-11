//continue ve break örneði
#include<iostream>
using namespace std;
void  main()
{
	int i;
	for(i = 1 ; i < 10 ; i++)//1 den 10 kadar sayýlarý üret
      { 
		  if (i == 5)//sayý 5 olunca
			  break;//dur
          cout<< i; //yazdýr
	 }
    for(i = 1 ; i < 10 ; i++)//1 den 10 a kadar sayýlarý üret 
        { 
			if (i == 5)//sayý 5 olunca 
            continue;//sonraki döngü adýmýna atla
            cout<< i;//yazdýr
	  }
	cin>>i;
}