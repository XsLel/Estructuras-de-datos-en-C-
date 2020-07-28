#include<iostream>
using namespace std;
#include"conjunto.h"

Conjunto::Conjunto(){
	cto=new string[M];
	cardinal=0;
	capacidad=M;
}
Conjunto::Conjunto(const Conjunto& org){
	cto=new string[org.capacidad];//copia segura
	cardinal=org.cardinal;
	capacidad=org.capacidad;
}
bool Conjunto::esVacio() const{
	return cardinal==0;
}
void Conjunto::anadir(string elemento){
	if(!pertenece(elemento)){
		if(cardinal==capacidad{
			string* nuevoCto;
			nuevoCto=new string[capacidad + M];
			for(int k=0;k<cardinal;k++)
				nuevoCto[k]=cto[k];
			delete cto;
			cto=nuevoCto;
			capacidad+=M;
		}
		cto[cardinal++]=elemento;
	}
}
void Conjunto::retirar(string elemento) const{
	if(pertenece(elemento)){
		int k=0;
		while(!(cto[k]==elemento))k;
		for(;k<cardinal;k++)
			cto[k]=cto[k+1];
		cardinal--;
	}
}
bool Conjunto::pertenece(string elemento) cosnt{
	int k=0;
	bool encontrado=false;
	while(k<cardinal&&!encontrado){
		encontrado=cto[k]==elemento;
		k++;
	}
	return encontrado;
}
int Conjunto::cardinal() const{
	return this->cardinal;
}
Conjunto Conjunto::union2(const Conjunto& c2){
	int k;
	Conjunto u; //conjunto union;
	for(k=0;k<cardinal;k++)
		u.cto[k]=cto[k];
	u.cardinal=cardinal;
	//añade los elementos de c2 no incluidos
	for(k=0;k<c2.cardinal;k++)
		u.anadir(c2.cto[k]);
	return u;
}