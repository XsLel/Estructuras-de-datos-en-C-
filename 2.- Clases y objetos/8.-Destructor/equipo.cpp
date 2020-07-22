/*
	Uso de un destructor
*/
class Jugador{};
class Equipo{
	private:
		Jugador* jg;
		int numJug;
		int actual;
	public:
		Equipo(int n=12){
			jg=new Jugador[n];
			numJug=n;
			actual=0;
		}
		~Equipo() {// destructro, pueden hacer ese guion con alt + 126
			if(jg!=0)
				delete[] jg;
		}
};
int main(){
	return 0;
}