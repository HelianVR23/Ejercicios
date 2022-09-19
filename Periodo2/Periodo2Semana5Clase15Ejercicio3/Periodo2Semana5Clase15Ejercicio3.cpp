//Escriba un programa que cuente la cantidad de
//elementos positivos de un arreglo e imprima dicho valor.

#include<iostream>
using namespace std;

int main () {
	
	float arreglo[12] = {15,3,55,7,9,-5,8,-56,4,-6,-7,-10};
	int cantidad=0;
	cout<<"Elementos positivos: ";
	for(int i=0; i<12;i++) {
		if(arreglo[i]>0) {
			cout<<arreglo[i]<<",";
			cantidad++;
		}
	}
	cout<<endl<<"Cantidad de elementos positivos: "<<cantidad;

}
