#include <iostream>
using namespace std;

class Rectangle{
	protected:
		float L, l, S=0;
	public:
		Rectangle(float L1 = 0, float l1 = 0) {L = L1; l = l1;};
		void surface(){ S = L*l;}
		virtual void affich(){ cout << "S = " << S << endl;};
};

class CCube : public Rectangle{
	private:
		float h, V=0;
	public:
	CCube(float L, float l, float H) : Rectangle(L, l){ h = H;}
	void volume(){surface(); V = S*h;};
	virtual void affich(){ cout << "V = " << V << endl;}
	
			
};
int main(void){
CCube C(3.7,5.2,2.9);
Rectangle R = C;
R.surface();
R.affich();

C.volume();
C.affich();

Rectangle *ptr[2];
ptr[0] = &R;
ptr[1] = &C;

ptr[0]->affich();
ptr[1]->affich();

return 1;
}

