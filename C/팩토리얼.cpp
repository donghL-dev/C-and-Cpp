#include <stdio.h>
int factorial(int n)
{
	int i;
	int result = 1;
	for(i=1; i<=n; i++)
	result = result * i;
	return result;
 } 
 
 int main()
 {
 	int num;
 	int n;
 	
 	printf("숫자를 입력하세요 : ");
 	scanf("%d", &num);
 	
 	for(n=0; n<=num; n++)
 	printf("%d의 팩토리얼은 %d\n", n, factorial(n));
 	
 }
