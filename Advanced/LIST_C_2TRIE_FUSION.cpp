#include <iostream>
using namespace std;
struct List{
	int data;
	List * next;
	
};
List * List1 = NULL;
List * List2 = NULL;
List * List3 = NULL;

int size1 = 0, size2 = 0, callback = 0;
void affich(List *);
bool insert(List *&, int, int);
void mergeSort(int*, int, int);
void merge(int*, int, int, int);
int getElement(List* start, int n);
void add();
int main(void){

insert(List1, 8, 1);
insert(List1, 7, 1);
insert(List1, 6, 1);
insert(List1, 5, 1);

insert(List2, 4, 2);
insert(List2, -1, 2);
insert(List2, 2, 2);

add();

cout << "\t ========= AFFICHAGE =============\n\n";
affich(List3);


cout << "\t ============ TRIE =============\n\n";

int T[size1+size2];
for (int i = 0; i<size1+size2; i++) T[i] = i;
mergeSort(T, 0, size1+size2-1);

for (int i = 0; i<size1+size2; i++) cout << "\t\t\t" << getElement(List3, T[i]) << endl;

return 1;
}

void affich(List *ptr){
	
	if(ptr != NULL){
		cout << "\t\t\t" << ptr->data << endl;
		affich(ptr->next);	
	}
}
bool insert(List * &ptr, int n, int list){
	//if(callback == 1) size2--;
	
	if(ptr == NULL){
		ptr =  new List;
		ptr->data = n;
		ptr->next = NULL;
		list == 1 ? size1++ : ( list == 2 ? size2++ : 0);
		return true;

	}
	insert(ptr->next, n, list);

}


void mergeSort(int *T, int left, int right){
	
	if (left < right){
		int center = (left + right)/2;
		
		mergeSort(T, left, center);
		mergeSort(T, center+1, right);
		
		merge(T, left, right, center);
		
	}
}

void merge(int *T, int left, int right, int center){
	
	int i = left, k = 0, j = center +1, R[right-left+1];
	
	while(i <= center && j <= right) R[k++] = (getElement(List3, T[i]) < getElement(List3,T[j]) ? T[i++] : T[j++]);
	
	while (i <= center) R[k++] = T[i++];
	while (j <= right) R[k++] = T[j++];
	for(i=left;  i<=right;T[i] = R[i++-left]);
}

int getElement(List* start, int n){
	for (int i =0; i<n; i++){
		start = start->next;
	}
	return start->data;
}

void add(){
	callback = 1;
	for (int i = 0; i<size1; i++) insert(List3, getElement(List1, i), 3);
	//cout << size2;
	for (int i = 0; i<size2; i++) insert(List3, getElement(List2, i), 3);	
}
