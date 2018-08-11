#include <iostream>
#include <stdio.h>

using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int a,b,c, mayor, menor;
	float div;
	cout<< "  Ingrese el valor de a:   ";
	cin>>a;
	cout << "  Ingrese el valor de b:   ";
	cin>>b;
	cout<< "  Ingrese el valor de c:   ";
	cin>>c;
	if((a>b)&&(b>c))
	{
	mayor=a; menor=c;
	cout<< "  El valor mayor es " <<a<< " y el valor menor es  " <<c<<"\n";
    }
	if((b>a)&&(c>a))
	{
	mayor=b; menor=a;
	cout<< "  El valor mayor es " <<b<< " y el valor menor es  " <<a<<"\n";
    }
	if((c>a)&&(a>b))
	{
	mayor=c; menor=b;
	cout<< "  El valor mayor es " <<c<< " y el valor menor es  " <<b<<"\n";
    }
    div=mayor/menor;
    cout<< "  La division entre: " <<mayor<< " y :  " <<menor<< "  es = " <<div<<"\n";
	return 0;
}
/*cambio de archivo
