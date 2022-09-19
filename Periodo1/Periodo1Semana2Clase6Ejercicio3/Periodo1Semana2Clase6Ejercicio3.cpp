// Dada N notas calcular el promedio de las notas
//aprobadas y el promedio de las notas desaprobadas. La nota para aprobar es 6.


#include<iostream>
using namespace std;

int main () {
	
	float promedio = 0;
	float nota = 0;
	int aprobadas = 0;
	int desaprobadas = 0;
	cout<<"Ingrese las 5 notas del periodo para la materia de Programacion"<<endl;
	
	for(int i = 0; i<5; i++) {
		cout<<"Ingrese la nota #"<<i + 1<<": ";
		cin>>nota;
		if(nota >= 6) {
			aprobadas++;
		}
		
		if(nota < 6) {
			desaprobadas++;
		}
		
		promedio+=nota;
	}
	
	cout<<"Promedio: "<<promedio/5<<endl;
	cout<<"Aprobadas: "<<aprobadas<<endl;
	cout<<"Desaprobadas: "<<desaprobadas;
	
}
