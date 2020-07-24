class Ejemplo{
	private:
		int datos;
	public:
		static int cuenta;
		Ejemplo();
		Ejemplo(int g);
		Ejemplo(const Ejemplo&);
		~Ejemplo();
};