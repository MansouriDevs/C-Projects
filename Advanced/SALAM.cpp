#include <iostream>
using namespace std;
struct Personne{
	int Stylo;
	bool folar;
};
int main(void){
Personne Nissrine;
Nissrine.Stylo = 1; // Vert
Nissrine.folar = true;

Personne * Younes;
Younes = &Nissrine;

Younes->Stylo = 2; 
Younes->folar = false;
cout << Nissrine.Stylo;

return 1;
}

