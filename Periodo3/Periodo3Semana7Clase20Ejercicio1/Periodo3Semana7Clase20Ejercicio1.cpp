//Mediante programación en C++, Hacer un
//programa que permita calcular la suma de los n elementos.


#include<iostream>
#include<conio.h>
using namespace std;

int main () {
	int x, n, c=0, s=0;
	cout<<"Ingresar cantidad de numeros: ";
	cin>>n;
	while(c<n) {
		cout<<"Ingresar numero: ";
		cin>>x;
		s+=x;
		c++;
	}
	
	cout<<"La suma de los numeros es: "<<s;
	getch();
	
}
