#include <iostream>
using namespace std;

main() {
	int tabla = 0, res = 0 ;
	cout<<"Ingrese una tabla ";
	cin>>tabla;
	
for (int i=0;i<10;i++)
{
	res = tabla * i;
	cout<<tabla<<" x "<< i <<" = "<<res<<endl;
	
}
	
system("pause");
	
}

