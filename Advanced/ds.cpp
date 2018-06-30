#include <iostream>

using namespace std;

int main(void){
int **n = new int*[55];

**n = 24;

*(*n+1) = 25;

*(*n+2) = 22;
//*(*(n+3)) = 23;
//*(*(n+4)) = 24;
//for(int i =4; i>=0; i--) cout << *(*(n+i)) << endl;

return 1;
}

