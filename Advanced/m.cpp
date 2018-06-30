#include <iostream>
using namespace std;
class Mother{
	public:
		virtual void Say() = 0;
};

class Son : public Mother{
	public:
		void Say(){
			cout << "Good Morning Mother :) " << endl;
		}
};
auto add(auto a, auto b){
	return a+b;
}
int main(void){
try{
	cout << "Hi";
}catch(int x){
	
}
return 1;
}

