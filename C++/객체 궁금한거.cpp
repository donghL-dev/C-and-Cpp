#include<stdlib.h>
#include<stdio.h>
#define SWAP(x, y, t) ((t)=(x), (x)=(y), (y)=(t))


void bubble_sort(int list[], int n)
{
	int i, j, temp; // 변수를 선언 해주고 
	for(i=n-1; i>0; i--) { // i는 n-1부터 0까지 작아지고 
		for(j=0; j<i; j++) // j는 0부터 n-1 까지 증가된다. 
		  if(list[j]>list[j+1]) // 여기서 list[j]가 list[j+1]보다 크다면 교체해준다.
		                        // 즉 앞의 숫자가 뒤에숫자보다 크다면 교체해준다. 
		    SWAP(list[j], list[j+1], temp); // j는 temp로 바꿔주고 j+1은 j로 바꿔주고 
	}                                       // temp는 j+1 로 바꿔주니까 결국 j와 J+1의 자리가 바뀐다. 
}

int main() 
{
	int i, j; // for문을 돌릴  i, j 선언 
	int *p = NULL; // 포인토 변수 p에 NULL 값 할당 
	int size = 0; // size 변수 선언 및 초기화 
	
	
	printf("쓰고자 하는 메모리 입력 : ");
	scanf("%d", &size); // 쓰고자 하는 메모리의 크기를 입력받고 
	printf("\n"); 
	p = (int*)malloc(sizeof(int)*size); // 동적 메모리 할당을 한다. 
	
	for(i=0; i<size; i++) {   
		printf("정렬 하고자 하는 값 입력 : ");
	    scanf("%d", &p[i]);
	} // 할당한 메모리로 배열을 만들어 정렬 값을 입력 받는다. 
	
	
	printf("\n"); 
	bubble_sort(p, size); // 버블 정렬 함수를 통해 정렬시킨다. 
	
	printf("정렬된 값 : ");   
	for(i=0; i<size; i++)
	  printf("%d ", p[i]);
	  // 정렬된 값을 출력해준다. 
	free(p); // 동적 메모리 할당을 해제해준다. 
}	

