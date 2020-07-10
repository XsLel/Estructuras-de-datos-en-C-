/* 
	Dado una sucesion de numeros, hallar el promedio de la suma
	A={a,b,c,...,n]
	respuesta = (sigma i=0 hasta i=n-1 A)/n
	
*/
#include<cstdlib>
#include<iostream>
using namespace std;

int main(){
	int numero; // tamano
	int contador, suma;
	float respuesta; //la media
	contador = 0;
	suma = 0;
	do{
		cout<<"Introdusca un numero por favor:\n";
		cin >> numero;
		if(numero != 0){
			suma = suma + numero; //equivalente suma+=n; mas eficiente
			contador = contador + 1; //equivalente contador+=1 o contador++ mas eficiente
		}
	}while(numero != 0);
	if(contador > 0){
		respuesta = suma/contador;
		cout<<"La respuesta es: "<<respuesta<<endl;
	}else
		cout<<"No hay datos\n";
	return 0;
}