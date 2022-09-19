// Usando arreglos cree un programa que lea 10
//números por teclado, los almacene en un array y muestre la media.

#include <iostream> 
using namespace std; 

int main(){ 

	int arreglo[10]; 
	double suma = 0, promedio; 
	for(int i=0; i<=9;i++){ 
		cout << "Ingrese el numero "<<i+1<<": " ; 
		cin >> arreglo[i]; 
		suma = suma + arreglo[i]; 
	} 
	promedio = suma / 10; 
	cout << "El promedio es: " << promedio; 
	return 0; 
} 
