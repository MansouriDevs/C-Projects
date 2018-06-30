#include <iostream>
using namespace std;

class A{
protected:
	int x;
	int y;
public:
	void setA(const int &xx, const  int &yy){ x = xx; y = yy;	}
	void affich() const { cout << x << " " << y << endl;}
};

class B : public A{
	int z;
	
public:
	void setB(const int &xx, const int &yy, const int &zz){
		A::setA(xx, yy); z =zz;
	}
	void affich() const{
		cout << x << " " << y << " " << z << endl;
	}
};
int main(void){
A a;
a.setA(3,5);
a.affich();

B b;
b.setB(7,8,12);
b.affich();


return 1;
}

