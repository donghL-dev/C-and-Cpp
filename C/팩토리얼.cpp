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
 	
 	printf("���ڸ� �Է��ϼ��� : ");
 	scanf("%d", &num);
 	
 	for(n=0; n<=num; n++)
 	printf("%d�� ���丮���� %d\n", n, factorial(n));
 	
 }
