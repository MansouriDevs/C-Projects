#include <iostream>
using namespace std;

class A{
protected:
	int x;
	int y;
public:
	void setA(const int &xx, const  int &yy){ x = xx; y = yy;	}
	virtual void affich() const { cout << x << " " << y << endl;}
};

class B : public A{
	int z;
	
public:
	void setB(const int &xx, const int &yy, const int &zz){
		A::setA(xx, yy); z =zz;
	}
	virtual void affich() const{
		cout << x << " " << y << " " << z << endl;
	}
};
int main(void){
A a;
a.setA(3,7);

B b;
b.setB(11,12,5);

A * ptr[2];

a.affich();
b.affich();
ptr[0] = &a; ptr[1] = &b;

ptr[0]->affich();
ptr[1]->affich();

return 1;
}

