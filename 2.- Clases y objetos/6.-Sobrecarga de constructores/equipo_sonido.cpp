//Sobrecarga de constructores
//#include<string.h>
#include "iostream"
using namespace std;

class EquipoSonido{
	private:
		int potencia, voltios;
		string marca;
	public:
		EquipoSonido(){
			marca="Sin marca";
			potencia=voltios=0;
		}
		EquipoSonido(string m){
			marca=m;
			potencia=voltios=0;
		}
		EquipoSonido(string m, int p, int v){
			marca=m;
			potencia=p;
			voltios=v;
		}
};
int main(){
	return 0;
}