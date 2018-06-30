#include <iostream>
#include <iomanip>
#include <string> 
using namespace std;
class IntegerList{
	protected:
	int *T1, rsize, usize;
	
	public:
		IntegerList(int n=1): rsize(n){
			T1 = new int[rsize];
			usize =0;
		}
			IntegerList operator+=(IntegerList A){
			IntegerList R(A.rsize+this->rsize);
			IntegerList *D = this;
			for (int i =0; i<usize; i++) R.push(this->getAt(i));
			for (int i =0; i<A.usize; i++) R.push(A.getAt(i));
			*this = R;
			delete D;
			return R;
		}	
		void push(int n){
			T1[usize] = n;
			usize++;
			if(usize>rsize){
				IntegerList temp(1);
				*this += temp;
			} 
		}
		int getAt(int i){
	
		return i>usize-1 || i<0 ? T1[usize-1]:T1[i];
		}
		void valueAt(int i, int n){
			T1[i>usize-1 || i<0 ? usize-1 : i] = n;
		
		}	
		void show(){
			for (int i = 0; i<usize; i++) cout << T1[i] << " | ";
			cout << endl;
		}
		
		int capacity(){
			return rsize;	
		}
		int size(){
			return usize;	
		}
};

class Matrice : public IntegerList{	
	public:
			int **TM, L, C;
		Matrice(int L1=2, int C1=2) : IntegerList(L1){
			L = L1; C = C1;
			TM = (int**) T1;
			for (int i = 0; i<L; i++) *(TM+i) = new int[C];
		}
		void write(){
			for (int i = 0; i<L; i++)
				for (int j = 0; j<C; j++)
					cin >> *(*(TM+i)+j);
		}
		void show(){
			cout << "-----------------" << endl << setw(4);
			for (int i = 0; i<L; i++){
				for (int j = 0; j<C; j++)
					cout << *(*(TM+i)+j) << setw(4);
				cout << endl;
			}
			cout << "-----------------" << endl;

		}
		Matrice operator+(Matrice P){
			if((P.L == this->L)&& (this->C == P.C)){
				for (int i = 0; i<this->L; i++)
					for(int j=0; j<this->C; j++)
						P.TM[i][j] += this->TM[i][j];
			return P;	
			}
			return 0;
			
		}
		
		Matrice operator-(Matrice P){
			if((P.L == this->L)&& (this->C == P.C)){
				for (int i = 0; i<this->L; i++)
					for(int j=0; j<this->C; j++)
						(P.TM[i][j] -= this->TM[i][j]) *= -1;
						
			return P;	
			}
			return 0;
			
		}

		Matrice operator*(Matrice P){
			
			if((P.L == this->C)){
				Matrice R(this->L, P.C);
					for (int i = 0; i<this->L; i++){
						for (int j = 0; j<P.C; j++ ){
							R.TM[i][j] = 0;
								for(int k = 0; k<this->C; k++){
									R.TM[i][j] += this->TM[i][k] * P.TM[k][j];	
								}			
						}
					}
			return R;					
			}
			return 0;
		}

};
std::ostream& operator<< (std::ostream &out, const Matrice &M){
	string str = "[";
	for (int i = 0; i<M.L; i++){
		str += "{";
		for (int j = 0; j<M.C; j++) str += to_string(M.TM[i][j]) + (j+1 == M.C ? "};" : ",");
	}
	str[str.length()-1] = ']';
    out << str; 	
    return out;
}


int main(void){

Matrice M(2,3);
Matrice N(3,2);
cout << "M = \n"; M.write();
cout << "N = \n"; N.write();
system("cls");
M.show();
N.show();
cout << "M = " << M << endl << endl;
cout << "N = " << N << endl << endl;
//cin >> M;
cout << "M*N = " << M*N << endl;
(M*N).show();

//C = N * M;
//C.show();
//cout << T1.capacity() << endl;
//cout << T1.size() << endl;
return 1;
}

