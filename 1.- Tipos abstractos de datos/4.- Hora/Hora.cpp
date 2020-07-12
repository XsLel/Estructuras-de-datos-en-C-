#include<cstdlib>
#include<iostream>
using namespace std;

class Hora{
	private: //Atributos
		int horas, minutos, segundos;
	public: //constructor
		Hora(){
			horas = 0;
			minutos = 0;
			segundos = 0;
		}
		//sobrecarga de constructor
		Hora(int h,int m,int s){
			horas = h;
			minutos = m;
			segundos = s;
		}
		//predefinicion de metodos
		void visualizar();
		void sumar(Hora h1,Hora h2);
};
void Hora::visualizar(){
	cout<<horas<<":"<<minutos<<":"<<segundos<<endl;
}
void Hora::sumar(Hora h1, Hora h2){
	segundos = h2.segundos + h1.segundos;
	minutos = h1.minutos + h1.minutos + segundos/60;
	segundos = segundos % 60;
	horas = h2.horas + h1.horas + minutos/60;
	minutos = minutos % 60;
}
int main(){
	Hora h1(10,40,50), h2(12,35,40), h;
	h1.visualizar();
	h2.visualizar();
	h.sumar(h1,h2);
	h.visualizar();
	return 0;
}