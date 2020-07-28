const int M=20;
class Conjunto{
	private:
		string* cto;
		int cardinal;
		int capacidad;
	public:
		Conjunto();
		Conjunto (const Conjunto& org);
		bool esVacio() const;
		void anadir(string elemento);
		void retirar(string elemento);
		boolean pertenece(string elemento) const;
		int cardinal() const;
		Conjunto union2(const Conjunto& c2);
}