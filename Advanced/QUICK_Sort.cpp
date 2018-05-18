#include <iostream>
#include <algorithm>
using namespace std;
int part(int *, int, int);
void print(int *, int);
void quick(int *, int, int);

int main(void){
int tab[100];
int i;
for (i= 0; i<6; i++) cin >> tab[i];
quick(tab, 0, i-1);
print(tab, i);


return 1;
}

void print(int *arr, int size){
	for (int i = 0; i<size; i++) cout << arr[i] << " | ";
}

int part(int *arr, int start, int end){
	int j =start, pivot = arr[end];
	for (int i = start;i<=end; i++) if(arr[i] <= pivot) swap(arr[i], arr[j++]);
return j-1;
}
void quick(int *arr, int start, int end){
	if(start<end){
		int newone = part(arr, start, end);
		quick(arr, start, newone-1);
		quick(arr, newone+1, end);
	}
}
