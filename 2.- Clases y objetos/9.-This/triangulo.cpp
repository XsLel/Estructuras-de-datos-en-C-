/*
	uso de la autoreferencia this
*/
#include<iostream>
using namespace std;
class Triangulo{
	private:
		double base, altura;
	public:
		double area() const{
			return base*altura/2.0;
		}
		//hace mayor enfasis
		double area2() const{
			return this -> base * this -> altura/2;
		}
		void datosTriangulo(double base, double altura){
			this -> base = base;
			this -> altura = altura;
		}
		/*const Triangulo& datosTriangulo(double base, double altura){
			this -> base=base;
			this -> altura=altura;
			return *this;
		}*/
		const Triangulo& visualizar() const{
			cout << "Base = "<<base<<endl;
			cout << "Altura = "<<altura<<endl;
			return *this;
		}
		/*
			Ahora se puede usar esto en el main
			Trangulo t;
			t.datosTriangulo(15.0,12.0).visualizar();
		*/
};
int main(){
	return 0;
}