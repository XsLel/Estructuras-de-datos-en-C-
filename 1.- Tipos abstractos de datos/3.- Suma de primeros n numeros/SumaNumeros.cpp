/*
	Dado un numero n, hallar la suma de los primeros n numeros 
	naturales
	respuesta = sumatoria (1+2+...+n)
*/
#include<cstdlib>
#include<iostream>
using namespace std;

int main(){
	int suma, contador, n;//declaracion de atributos
	do{
		cout<<"Escribe un numero por favor: ";
		cin >> n; // lee un numero dado por tu teclado
		cout<<endl;// endl es similar a \n
	}while(n <= 0);
	contador = 0; 
	suma = 0; // la respuesta
	while(contador < n){
		contador = contador + 1;
		suma = suma + contador;
	}
	cout << suma;//muestra la respuesta por consola
	return 0;
}