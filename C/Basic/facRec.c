#include <stdio.h>
#include <stdlib.h>

   int fac (int n) {
   
   if (n <= 1) return 1;
   else return n * fac (n-1);
   }

void main (int argc, char *argv[]) {

printf ("fac(%d) is %d\n", 4, fac(4));

}
