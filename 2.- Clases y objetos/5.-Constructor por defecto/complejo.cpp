//Constructor por defecto
#include<iostream>
using namespace std;
class Complejo{
	private:
		double x;
		double y;
	public:
		Complejo(double a=0.0, double b=1.0){
			x=a;
			y=b;
		}
		double getX(){
			return x;
		}
		double getY(){
			return y;
		}
};
int main(){
	Complejo a;
	Complejo* b=new Complejo(-3,4);
	cout<<"a :"<<a.getX()<<", "<<a.getY()<<endl;
	cout<<"b :"<<b->getX()<<", "<<b->getY()<<endl;
	return 0;
}