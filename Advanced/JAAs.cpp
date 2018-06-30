#include <iostream>
using namespace std;
class A{
	protected:
	int x;
	public:
		void affich(){
			cout <<  "A";
		}
	friend class C;
};
class B{
	public:
		void affich(){
			cout <<  "B";
		}	
};
class C : public A, public B{
	public:
	using A::affich;
};
int main(void){
C c;
c.affich();


return 1;
}

