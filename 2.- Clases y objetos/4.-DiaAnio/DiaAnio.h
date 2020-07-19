class DiaAnio{
	private:
		int dia, mes;
	public:
		DiaAnio(int d,int m);
		bool igual(const DiaAnio& d) const;
		void visualizar() const;
};