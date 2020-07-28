#include "ejemplo.h"
#include<iostream>
int Ejemplo::cuenta=0;
using namespace std;
Ejemplo::Ejemplo(){
	datos=0;
	cuenta++;
}
Ejemplo::Ejemplo(int g){
	datos=0;
	cuenta++;
}
Ejemplo::Ejemplo(const Ejemplo& org){
	datos=org.datos;
	cuenta++;
}
Ejemplo::~Ejemplo(){
	cuenta--;
}
/*int main(){
	return 0;
}*/
int main(){
	Ejemplo d1,d2;
	cout<<"Objetos Ejemplo: "<<Ejemplo::cuenta<<endl;
	if(true){
		Ejemplo d3(88);
		cout<<"Objetos Ejemplo: "<<Ejemplo::cuenta<<endl;
	}
	cout<<"Objetos Ejemplo: "<<Ejemplo::cuenta<<endl;
	Ejemplo* pe;
	pe=new Ejemplo();
	cout<<"Objetos Ejemplo: "<<Ejemplo::cuenta<<endl;
	delete pe;
	cout<<"Objetos Ejemplo: "<<Ejemplo::cuenta<<endl;
	return 0;
}