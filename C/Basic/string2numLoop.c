#include <stdio.h>
#include <stdlib.h>

int str2num (char *str) {
int num = str[0]-'0';
for (++str;*str;str++)
num = 10*num+*str-'0';
return num;
}

void main (int argc, char *argv[]) {

char a[] = "12345";
 //printf ("The value is %d\n", str2num(argv[1]));
printf ("The value is %d\n", str2num(a)*2);

}
