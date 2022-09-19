//Se quiere realizar un programa que lea por teclado
//las 5 notas obtenidas por un alumno (comprendidas entre 0 y 10). A continuación,
//debe mostrar todas las notas, la nota media, la nota más alta que ha sacado y la
//menor.

#include<iostream>
using namespace std;

int main () {
	
	float media = 0;
	float nota = 0;
	float notaAlta = 0;
	float notaMenor = 10;
	cout<<"Ingrese las 5 notas"<<endl;
	
	for(int i = 0; i<5; i++) {
		
		do {
			cout<<"Ingrese la nota #"<<i + 1<<": ";
			cin>>nota;
		} while( nota < 0 || nota > 10);
		
		if(nota > notaAlta) {
			notaAlta=nota;
		}
		
		if(nota < notaMenor) {
			notaMenor=nota;
		}
		
		media+=nota;
	}
	
	cout<<"Media: "<<media/5<<endl;
	cout<<"Nota mayor: "<<notaAlta<<endl;
	cout<<"Nota menor: "<<notaMenor;
	
}
