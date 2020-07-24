#include <iostream>
#include "ejemplo.h"
using namespace std;
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