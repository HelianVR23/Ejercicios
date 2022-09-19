//: Hacer un programa que lea 5 números y se desea
//saber cuál fue el número mayor

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
