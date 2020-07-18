//un numero racional hecho en POO
class Racional{
	private:
		int numerador;
		int denominador;
	public:
		Racional(){
			numerador=0;
			denominador=1;
		}
		int leerN() const{
			return numerador;
		}
		int leerD() const{
			return denominador;
		}
		void fijar(int n,int d){
			numerador=n;
			denominador=d;
		}
};
int main(){
	return 0;
}