#include <iostream>

using namespace std;
struct List{
	int data;
	List  * next;
};
void push_end(List *&, int);

List * start1 = NULL;
List * start2 =  NULL;
List * start3 = NULL;
void trie(List *s1, List *s2);
void affich(List*);

int main(void){
push_end(start1, 3);push_end(start1, 1); push_end(start1, 0);
push_end(start2, -1); push_end(start2, 5); push_end(start2, -2);

trie(start1, start2);
affich(start3);

return 1;
}

void push_end(List *&tete, int n){
	List * tmp = tete;
	if(tete==NULL){
		tete = new List;
		tete->next = NULL;
		tete->data = n;
	}else{
		while(tmp->next != NULL) tmp= tmp->next;
		tmp->next = new List;
		tmp->next->next = NULL;
		tmp->data = n;
	}
}

void trie(List *s1, List *s2){
while(s1 != NULL){
	push_end(start3, s1->data);
	s1 = s1->next;
}

while(s2 != NULL){
	push_end(start3, s2->data);
	s2 = s2->next;
}
	 
	List *str = start3;
	List *temp;
for (; str != NULL; str = str->next){
	for (temp = str->next; temp != NULL; temp = temp->next){
		if (str->data > temp->data){
			int t = str->data;
			 str->data = temp->data;
			 temp->data = t;
		}
	}
}
}
void affich(List *ptr){
	while(ptr != NULL){
		cout << " | " << ptr->data << endl;
		ptr = ptr->next;
	}
}

