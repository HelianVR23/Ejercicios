//Usar la sentencia foreach para ejecutar un conjunto
//de sentencias para cada carácter de una cadena

#include<iostream>
using namespace std;

int main () {
	
	string str = "elemento";
	
	for(char ch: str) {
		cout<<ch<<" ";
	}
	
}
