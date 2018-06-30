template <class T>
class INPUT{
int Values[7] = {1,5,10,50,100,500,1000};
char Symbol[7] ={'I', 'V', 'X', 'L', 'C','D', 'M'};
	T input;
	public:
		INPUT(T in){input = in;}
		
		int toDecimal(void);
		string toRoman(void);	
};
