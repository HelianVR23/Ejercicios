//: Hacer un programa que lea 5 n�meros y se desea
//saber cu�l fue el n�mero mayor

#include<iostream>
using namespace std;

int main () {

	int mayor = 0;
	int numero = 0;
	
	for(int i = 0; i<5; i++) {
		cout<<"Ingrese el numero #"<<i + 1<<": ";
		cin>>numero;
		if(numero > mayor) {
			mayor = numero;
		}
	}
	
	cout<<"El numero mayor es: "<<mayor;

}
