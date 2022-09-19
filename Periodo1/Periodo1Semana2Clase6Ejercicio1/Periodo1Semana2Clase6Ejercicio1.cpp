//Realizar un algoritmo que obtenga la suma de los
//números pares hasta 100.

#include<iostream>
using namespace std;

int main () {
	
	int total = 0;
	
	for (int i = 1; i<=100; i++) {
		if(i%2==0) {
			total += i;
		}
	}
	
	cout<<"Suma de numeros pares: "<<total;
	
}
