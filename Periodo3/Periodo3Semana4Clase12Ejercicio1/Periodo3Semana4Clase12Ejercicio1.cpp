//Ejercicio #1: En los programas anteriores, la condici�n siempre
//es verdadera. Por lo tanto, el cuerpo del bucle se ejecutar� infinitas veces.

//Ejercicio: Modifique los programas anteriores para que no tengan bucles infinitos:

#include<iostream>
using namespace std;

int main () {
	
	while(true) {
		cout<<"DENTRO DEL WHILE"<<endl;
		if(true) break;
	}
	
	cout<<"SALIO DEL WHILE"<<endl;
	
	int count = 1;
	
	do {
		cout<<"DENTRO DEL DO WHILE"<<endl;
		count++;
	} while (count==1);
	
	cout<<"SALIO DEL DO WHILE";
	
}
