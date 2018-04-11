#include <stdio.h>
#include <stdlib.h> // malloc, free function

int main() {
	int *p = NULL; // *p를 NULL 포인터로 선언 
	int size = 0; // size 입력받는 변수선언 및 초기화 
	int i; // for문에 사용될 변수 i 선언 
	
	printf("input the size : "); // size 입력 란 출력 
	scanf("%d", &size); // size 크기 지정 

	p = (int*)malloc(sizeof(int)*size); // size 만큼의 메모리 할당

	for(i = 0; i < size; i++) // size 만큼 입력
		scanf("%d", &p[i]);

	for(i = 0; i < size; i++) // 입력된만큼 출력
		printf("%d ", p[i]);
	
	printf("\n");
	free(p); // 동적으로 할당된 메모리 해제 
}
