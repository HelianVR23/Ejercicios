//Hacer un programa en C++ para recorrer los
//valores del array con un foreach imprimiendo (como ejemplo):
//animal: perro
//edad: 5
//altura: 0,75
//nombre: firulais

#include<iostream>;
using namespace std;

int main () {
	
	string propiedad[] = { "animal: perro", "edad: 5", "altura: 0.75", "nombre: firulais" };
        
        for(string i : propiedad)
    	{
    		cout<<i<<endl;
    	}
	
}
