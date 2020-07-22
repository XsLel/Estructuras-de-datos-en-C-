/*
	Clase compuesta, es una clase que usa otras clases ya definidas dentro de ella
*/
#include<iostream>
using namespace std;
class Expediente{
	public:
		Expediente();
		Expediente(int idt);
};

class Direccion{
	public:
		Direccion();
		Direccion(string d);
};
class Estudiante{
	public:
		Estudiante(){
			ponerId(0);
			ponerNotaMedia(0.0);
		}
		void ponerId(long);
		void ponerNotaMedia(float);
	private:
		long id;
		Expediente exp;
		Direccion dir;
		float notMedia;
};

/*Estudiante::Estudiante(int expediente, string direccion):exp(expediente), dir(direccion){
	ponerId(0);
	ponerNotaMedia(0.0);
}*/
int main(){
	return 0;
}