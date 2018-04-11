#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 10000
#define SWAP(x, y, t) ((t)=(x), (x)=(y), (y)=(t))

int list[MAX_SIZE];
int n;

void selection_sort(int list[], int n)
{
	int i, j, least, temp; // least는 최소 값이 있는 인덱스, temp는 최소값 
	for(i=0; i<n-1; i++) { // i가 n-1, 즉 정렬할 갯수의 -1보다 작을 때까지 반복한다.
	                       // 한번 반복할 때마다 i는 증가한다. 
		least = i; // i는 least가 된다. i가 n-1보다 작을 때이다.
		           // 인덱스 0이 최소값이 있는 인덱스라고 지정한다. 
		for(j=i+1; j<n; j++) // j는 인덱스 0이 플러스한 값이 되니까, 인덱스 1이 된다.
		                     // 인덱스 1이 전체 배열의 크기보다 작을 때까지 반복한다. 
			if(list[j]<list[least]) least=j; // 인덱스 1이 지금 현재 인덱스 0보다
			                                 // 작을 경우 인덱스 1이 최소값이 된다. 
		SWAP(list[i], list[least], temp); // 현재 i의 인덱스의 값이 최소값이 되고 최소값이 있는
		                            // 현재 i의 인덱스 즉, 현재 i의 인덱스가 0번쨰 인덱스 일 경우 최초의
								    // 배열이 되고 최소값이 있는 인덱스는 현재 i의 인덱스가 된다.
								    //최소값은 현재 i의 인덱스가 된 list[least]에 들어가는 것이다.
									// temp는 최소값이니 최소값이 있는 인덱스 least에 들어가게 된다.
// 이 반복을 한번 할 때마다 i와 j는 증감되고 i는 n-1보다 같아질 때까지 j는 n과  같아질때까지 반복한다.
// 이렇게 되면 최소값과 교환을 이용해 값들을 오름차순으로 정렬할 수 있다. 
	}
}

int main() 
{
	int i;
	n = MAX_SIZE; // 최대크기를 n으로 저장 
	for(i=0; i<n; i++) // 최대크기만큼 반복한다. 
	    list[i] = rand()%n; // 난수를 생성하고 생성한 뒤
		                // list[i]에 넣는다. 생성 범위는 0~n이다.  
	selection_sort(list, n); // 선택 정렬을 호출하고 
	
	for(i=0; i<n; i++) // 정렬 결과를 출력한다. 
	   printf("%d\n", list[i]);    
}



