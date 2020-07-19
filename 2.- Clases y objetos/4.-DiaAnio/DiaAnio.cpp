#include <iostream>
#include "DiaAnio.h"
using namespace std;

DiaAnio::DiaAnio(int d, int m){
	dia=d;
	mes=m;
}
bool DiaAnio::igual(const DiaAnio&d) const{
	if((dia==d.dia)&&(mes==d.mes))
		return true;
	else
		return false;
}
void DiaAnio::visualizar() const{
	cout<<"mes = "<<mes<<" , dia = "<<dia<<endl;
}
int main(){
	DiaAnio* hoy;
	DiaAnio* cumpleanios;
	int d,m;
	
	cout<<"Introduzca fecha de hoy, dia: ";
	cin>>d;
	cout<<"Introduzca nel numero de mes: ";
	cin>>m;
	hoy=new DiaAnio(d, m);
	cout<<"Introdusca fecha de nacimiento, dia: ";
	cin>>d;
	cout<<"Introdusca el numero de mes: ";
	cin>>m;
	cumpleanios = new DiaAnio(d,m);
	cout<<"La fecha de hoy es ";
	hoy->visualizar();
	cout<<"Su fecha de nacimiento es ";
	cumpleanios->visualizar();
	if(hoy->igual(*cumpleanios))
		cout<<"!Feliz cumpleanios"<<endl;
	else
		cout<<"Feliz dia\n";
		
	return 0;
}
