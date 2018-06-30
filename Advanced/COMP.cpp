#include <iostream>

#include <math.h>
using namespace std;
class Complexe{	
	public:
		float Im, Re;
		Complexe(const float &R, const float &I) {Im = I; Re =R;}
		void affich(){ cout << Re << " + " << Im << "i" << endl;};
		bool egal(Complexe &A){ return ( this->Im == A.Im && this->Re == A.Re ? true : false); }
		float module() { return sqrt(Im*Im + Re*Re);}
		Complexe addition(Complexe A){
			A.Re += this->Re;
			A.Im += this->Im;
			return A;
		}
		friend Complexe additions(Complexe, Complexe);
};
Complexe additions(Complexe A, Complexe B){
	Complexe Z(A.Re + B.Re, A.Im + B.Im );
	return Z;
}
int main(void){
Complexe Z1(1,2), Z2(3,4), Z3(1,2);

cout << " Z1 = "; Z1.affich(); cout <<endl;
cout << " Z2 = "; Z2.affich(); cout <<endl;
cout << " Z3 = "; Z3.affich(); cout <<endl;

Complexe ZSm = Z1.addition(Z2);
cout << " M : Z1 + Z2 = "; ZSm.affich();

Complexe ZSa = additions(Z1,Z2);
cout << " A : Z1 + Z2 = "; ZSa.affich(); cout <<endl;

cout << " Z1 == Z2  ? " << Z1.egal(Z2); cout <<endl;
cout << " Z1 == Z3  ? " << Z1.egal(Z3); 
return 1;
}

