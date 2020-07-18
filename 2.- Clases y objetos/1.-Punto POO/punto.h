//archivo Punto.h
class Punto{
	private:
		int x,y;
	public:
		Punto(int x_,int y_){
			x=x_;
			y=y_;
		}
		Punto(){
			x=y=0;
		}
		int leerX() const;
		int leerY() const;
		void fijarX(int valorX);
		void fijarY(int valorY);
};
