//Escribir un programa en C++ que llene un array con
//todos los números divisibles entre 3 del 0 al 99. Luego mostrar los elementos por
//pantalla.

#include <iostream> 
using namespace std; 

int main () {
	
	int numeros[100];
	
	for(int i=0; i<100; i++) {
		if(i%3 == 0) {
			numeros[i] = i;
		}
	}
	
	for(int i = 0; i<100; i++){
		if(i%3 == 0) {
			cout<<numeros[i]<<endl;
		}
	}
	
	return 0;
	
}
