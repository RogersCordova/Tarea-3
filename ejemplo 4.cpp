#include <iostream>
using namespace std;

main() {
	int inicio = 0,fin = 0, res = 0 ;
	cout<<"Ingrese una tabla inicial ";
	cin>>inicio;
	cout<<"Ingrese una tabla final ";
	cin>>fin;

for (int rango = inicio;rango<=fin;rango++)
{
	for (int i=0;i<10;i++)
{
	res = rango * i;
	cout<<rango<<" x "<< i <<" = "<<res<<endl;
	
}
	
	
	
}
	
system("pause");
	
}

