//Crear una función que permita leer el valor
//correspondiente a una distancia en millas y las visualice expresadas en kilómetros.
//Sabiendo que 1 milla equivale a 1.60934 kilómetros.

#include <iostream> 
using namespace std; 

float convertirKilometro(float milla){ 
	double kilometro = milla * 1.60934; 
	return kilometro; 
} 

int main(){ 
	double milla; 
	cout << "Ingrese la cantidad en millas: " << endl; 
	cin >> milla; 
	cout << "La cantidad en kilometros es: " << convertirKilometro(milla); 
	return 0;
}
