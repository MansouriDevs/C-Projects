#include <iostream>
using namespace std;
class Mother{
	protected:

	Mother * MakeMotherFriend;
	public:
		int data;
		void show(){
			cout << data << endl;
		}
friend class Son;
};

class Son : public Mother{
	int value;
	Mother * sonfriend;
	public:
		void set(){
			data = 28;
			sonfriend = new Mother;
			sonfriend->MakeMotherFriend = new Mother;
		}
};

class Child : private Son{
	int fer;
	
	public:
		void sets(){
			data = 57;
		}

};
int main(void){
	
Mother M;	
Son S;
Child C;
S.set();
M = S;
C.sets();
//C.data = 41;
M.show();
return 1;
}

