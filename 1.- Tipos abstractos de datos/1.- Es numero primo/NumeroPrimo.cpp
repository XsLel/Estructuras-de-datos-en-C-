/*
	Dado un numero positivo, hallar si un numero es primo o no
*/
#include<cstdlib>
#include<iostream>
#include<stdbool.h>
using namespace std;

int main(){
	int numero,contador;
	bool primo;
	cout << "Escribe un numero por favor\n";//salida de consola
	cin >> numero;
	contador=2;
	primo = true;
	//algoritmo
	while(primo == true && (contador < numero)){
		if(numero % contador!=0){//controlamos que no tenga mas divisores
			contador += 1; //equivalente x = x + 1 pero menos eficiente
		}else{
			primo = false;//equivalente primo = !primo o primo = 0
		}
	}
	if(primo == 1)//equivalente if(primo) o if(primo == true)
		cout <<"El "<<numero<<" es primo"<<endl;//endl es igual a \n
	else
		cout <<"El "<<numero<<" NO es primo\n";
	return 0;
}