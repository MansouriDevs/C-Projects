#include <stdio.h>

struct t {
        int a;
        void (*fun) (int * a);
} ;

void get_a (int * a) {
        printf (" input : ");
        scanf ("%d", a);
}

int main () {
        struct t test;
        test.a = 0;

        printf ("a (before): %d\n", test.a);
        test.fun = get_a;
        test.fun(&test.a);
        printf ("a (after ): %d\n", test.a);

        return 0;
}
