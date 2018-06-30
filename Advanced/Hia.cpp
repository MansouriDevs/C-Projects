#include <iostream>
#include <fstream>
using namespace std;

int main(void){
ofstream siri("Hi.txt");
string line;
if(siri.is_open()){
	getline(cin, line);
	
	siri << line;
	siri.close();
	ifstream siri("Hi.txt");

}


return 1;
}

