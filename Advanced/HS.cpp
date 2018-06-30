#include <iostream>
using namespace std;
class Mom{
	public:
	int data;
	public:
		int value;
	//friend class Son;
};
class Son : public Mom{
	int sdata;
	public:
		int svalue;
};
int main(void){
Son S;
S.data = 5;


return 1;
}

