//Elaborar un programa que muestre los números
//pares comprendidos entre 10 y 20 inclusive.

#include<iostream>
using namespace std;

int main () {
	
	cout<<"Numeros pares entre 10 y 20, inclusive: ";
	for(int i = 10; i<=20; i++) {
		if(i%2==0) {
			cout<<i<<", ";
		}
	}

}
