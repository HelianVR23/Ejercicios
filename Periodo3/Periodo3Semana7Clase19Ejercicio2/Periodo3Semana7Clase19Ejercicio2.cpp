//Agregar una funcionalidad para que se impriman
//los números en forma ascendente cuando n1 es menor a n2. (se refiere al ejercicio
//anterior)

#include<iostream>
using namespace std;

int main () {
	
	int n1, n2, c;
	cout<<"Ingresar el primer numero: ";
	cin>>n1;
	cout<<"Ingresar el segundo numero: ";
	cin>>n2;
	c=n1;
	while(c>n2) {
		cout<<c<<endl;
		c--;
	}
	
	while(c<n2) {
		cout<<c<<endl;
		c++;
	}
	return 0;
}
