#include <iostream>

using namespace std;
void bulle(int *, int);
void print(int *, int);

int main(void){
int mat[6] = {-3,17,11,2,4,0};

bulle(mat, 6);
print(mat, 6);
return 1;
}

void bulle(int *T, int size){
	for (int i = 0; i<size; i++){
		for (int j = 0; j<size-1;  j++){
			if (T[j] > T[j+1]) swap(T[j], T[j+1]);
			print(T, 6); cout << endl;
		}
	}
	
}

void print(int *arr, int size){
	for (int i = 0; i<size; i++) cout << arr[i] << " | ";
}
