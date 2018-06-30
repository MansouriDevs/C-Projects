#include <iostream>
#include <math.h>
using namespace std;
class Complexe{
	protected:
	int Re;
	int Im;
	public:
		Complexe(int R=0, int M=0){
			Re = R;
			Im = M;
		};
	//	(a +bi) * (c + di) = ac +adi + bci -bd = ac -bd +i(ad+bc)
		Complexe operator+(Complexe const &c){
			return Complexe(Re + c.Re, Im + c.Im);
		}
		Complexe operator-(Complexe const &c){
			return Complexe(Re - c.Re, Im - c.Im);
		}
		
		Complexe operator+=(Complexe const &c){
			Re += c.Re;
			Im += c.Im;
			return *this;
		}
	
		Complexe operator-=(Complexe const &c){
			Re -= c.Re;
			Im -= c.Im;
			return *this;
		}
		
		Complexe operator*=(Complexe const &c){
			Re = Re*c.Re + Re -Im*c.Im;
			Im = Re*c.Im + Im*c.Re;
			return *this;
		}
		bool operator==(Complexe const &c){
			return((Im == c.Im ) && (Re == c.Re )) ? true : false;
		}
		
		bool operator<(Complexe const &c){
			return(sqrt(hypot(Re, Im)) < sqrt(hypot(c.Re, c.Im))) ? true : false;
		}
		
		bool operator>(Complexe const &c){
			return(sqrt(hypot(Re, Im)) > sqrt(hypot(c.Re, c.Im))) ? true : false;
		}	
		Complexe& operator++(int){
			++Re;
			++Im;
			return *this;
		}
		Complexe& operator++(){
			Re++;
			Im++;
			return *this;
		}

		friend ostream& operator<<(ostream&, Complexe const&);
		friend istream& operator>>(istream&, Complexe&);
		friend Complexe operator*(double x, Complexe &c);
		//friend Complexe operator*(Complexe &c, double x);
};

ostream& operator<<(ostream&out, Complexe const &c){out <<'(' << c.Re << ',' << c.Im <<')'; return out;}
istream& operator>>(istream&in, Complexe &c){in >> c.Re; in >> c.Im; return in;}

Complexe operator*(double x, Complexe &c){
			return (c.Re*x, c.Im*x);
}


/*
+
-
*
+=
-=
*=
==
<
>
*/

                                                                                                                                                                       

int main(void){
Complexe Z1(1,1), Z2(2,2);
cout << ++Z1 << endl;


return 1;
}

