/*
	Asignacion de objetos, solo utilizar esta tecnica cuando se haga uso de punteros
	para mayor eficiencia, como reserva de memoria y por seguridad
*/
#include<iostream>
using namespace std;	
class Persona{
	private:
		int edad;
		string nom, apell;
		string dni;
	public:
		//sobrecarga del operador de asignacion
		Persona& operator = (const Persona& p){
			if(this==&p)
				return *this;
			edad=p.edad;
			nom=p.nom;
			apell=p.apell;
			dni=p.dni;
			return *this;
		}
};
int main(){
	return 0;
}