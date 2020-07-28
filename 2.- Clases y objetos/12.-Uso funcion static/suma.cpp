class SumaSerie{
	private:
		static long n;
		static long m;
	public:
		static long suma(){
			m+=n;
			n=m=n;
			return m;
		}
};
long SumaSerie::n=0;
long SumaSerie::m=1;
int main(){
	return 0;
}