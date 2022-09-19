//Declare 2 arreglos de igual tamaño y entre ellos haga
//las 4 operaciones aritméticas básicas, sumar restar, multiplicar, dividir.

#include<iostream>
using namespace std;

int main () {
	
	float arreglo1[5] = {15,3,55,7,9};
	float arreglo2[5] = {2,49,16,80,10};

	cout<<endl<<"SUMA"<<endl;
	for(int i = 0; i<5; i++) {
		cout<<arreglo1[i]<<" + "<<arreglo2[i]<<" = "<<arreglo1[i]+arreglo2[i]<<endl;
	}
	cout<<endl<<"RESTA"<<endl;
	for(int i = 0; i<5; i++) {
		cout<<arreglo1[i]<<" - "<<arreglo2[i]<<" = "<<arreglo1[i]-arreglo2[i]<<endl;
	}
	cout<<endl<<"MULTIPLICACION"<<endl;
	for(int i = 0; i<5; i++) {
		cout<<arreglo1[i]<<" x "<<arreglo2[i]<<" = "<<arreglo1[i]*arreglo2[i]<<endl;
	}
	cout<<endl<<"DIVISION"<<endl;
	for(int i = 0; i<5; i++) {
		cout<<arreglo1[i]<<" / "<<arreglo2[i]<<" = "<<arreglo1[i]/arreglo2[i]<<endl;
	}

}
