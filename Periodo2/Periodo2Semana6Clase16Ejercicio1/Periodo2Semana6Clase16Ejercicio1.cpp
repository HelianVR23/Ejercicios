//Utilizando funciones con parámetros proceda a
//desarrollar el siguiente ejercicio: Crear un función que reciba un número real y
//devuelva un número entero con el valor: -1 si el número es negativo, 1 si el número
//es positivo o 0 si es cero.

#include<iostream> 
using namespace std; 

int num(int a){ 
	if(a < 0){ 
		return -1; 
	} else if(a > 0){ 
		return 1; 
	} else{ 
		return 0; 
	} 
} 

int main(){ 
	int a, b; 
	cout<<"\n Ingrese un numero: \n \n"; 
	cin>>a; 
	cout<< "\n \n \n \t" <<num(a); 
	return 0; 
}
