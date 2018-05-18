#include <iostream>
using namespace std;
void print(int *T, int size){
	for(int i=0; i<size; i++) cout << T[i] << " | ";
	cout << endl;
}
void ShellSort(int *T, int size){
	int gap = size/2;
	int k = 0;
for(int i = 0; i <size; i++){
		for(int i = 0; i<gap+k; i++){
		cout << T[i] << " | " << T[i+gap]<<endl;
		if(T[i] > T[i+gap]) swap(T[i], T[i+gap]);
	}
	print(T, size);
	gap--;
	k++;
}
}

int main(void){
int T[] = {7,6,8,9,3,2,10,5,1};
ShellSort(T, sizeof(T)/4);
print(T, sizeof(T)/4);

return 1;
}

