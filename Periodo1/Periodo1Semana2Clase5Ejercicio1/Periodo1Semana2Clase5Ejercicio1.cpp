//La empresa XY S.A. pretende realizar un estudio
//estadístico de su fuerza de ventas en el país, para ello, dispone de la siguiente
//información:
//Si el importe de ventas está entre 0 y 100 aplicar un bono de 3%
//Si el importe de ventas está entre 101 y 150 aplicar un bono de 4%
//Si el importe de ventas está entre 151 y 200 aplicar un bono de 5%
//Si el importe de ventas está entre 201 y 250 aplicar un bono de 6%
//Si el importe de ventas es mayor de 250 aplicar un bono de 7%
//Se pide mostrar la cantidad que vendió el trabajador y el bono ganado.

#include<iostream>

using namespace std;

int main () {
	
	float importeVentas;
	float total;
	cout<<"Ingrese el importe de ventas: $";
	
	cin>>importeVentas;
	
	if(importeVentas >= 0 && importeVentas <= 100) {
		total = importeVentas * 0.03;
	} else if (importeVentas >= 101 && importeVentas <= 150) {
		total =importeVentas * 0.04;
	}else if (importeVentas >= 151 && importeVentas <= 200) {
		total = importeVentas * 0.05;
	}else if (importeVentas >= 201 && importeVentas <= 250) {
		total = importeVentas * 0.06;
	}else if (importeVentas > 250) {
		total = importeVentas * 0.07;
	};
	
	cout<<"Cantidad vendida: $"<<importeVentas<<", bono: $"<<total; 
	
	
	
}
