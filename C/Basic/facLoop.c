#include <stdio.h>
#include <stdlib.h>

void main (int argc, char *argv[]) {

 int i; 
 int n = 4; 
 int fac = 1;

 for (i = n; i >= 1; i--)
 fac = fac * i;
 
 printf ("fac(%d) is %d\n", n, fac);
}
