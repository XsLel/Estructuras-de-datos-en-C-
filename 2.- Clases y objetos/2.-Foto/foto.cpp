#include <string>
//#include <iostream>
using namespace std;
class Foto{
	private:
		int nt;
		char opd;
	//protected:
		//string q;
	public:
		Foto(string r){
			nt=0;
			opd='S';
			q=r;
		}
		double mtd();
		string q;
};
class Marco{
	private:
		double p;
		string t;
	public:
		Marco();
		void poner(){
			Foto* u = new Foto("Hi hi");
			p= u->mtd();
			t="**"+ u->q +"**";
		}
};
int main(){
	return 0;
}