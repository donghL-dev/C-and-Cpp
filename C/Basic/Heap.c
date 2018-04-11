/
#include <stdio.h>
#define MAX_ELEMENT 200
typedef struct {
	int key;
} element; // 노드 안에 들어있는 Key를 element로 타입지정
typedef struct {
	element heap[MAX_ELEMENT]; // heap를 배열로 구현된다.
	int heap_size; // 현재 히프 안에 저장된 요소의 개수를 나타냄
} HeapType; // 구조체로 히프 타입에 대해서 구조체를 형성한다.

// init 함수는 초기화 함수다. heap를 초기화 시켜준다.
init(HeapType *h)
{
	h-> heap_size = 0;
}

void insert_max_heap(HeapType *h, element item)
{
	int i;
	i = ++(h->heap_size); // 하프의 크기를 하나 증가시킨 뒤 
	// 증가된 히프 크기 위치에 새로운 노드를 삽입한다.
	
	// 트리를 거슬러 올라가면서 부모 노드와 비교화는 과정
	while((i != 1) && (item.key > h->heap[i/2].key)) {
		// i가 루트 노드가 아니고 i번째 노드가 i의 부모 노드보다 클 경우
		h -> heap[i] = h->heap[i/2]; // i번째 노드와 부모 노드가 교환된다.
		i /= 2; // i노드는 한 레벨 위로 올라간다.
	} // i가 루트 노드가 되거나 삽입하려는 key가 부모 노드보다 작을 경우 
	// wile문을 빠져나오게 된다.
	h->heap[i] = item; // 최종적으로 지정된 위치가 결정된 후 
                       // 그 곳에서 i에  item을 넣는다. 
}

element delete_max_heap(HeapType *h)
{
	int parent, child;
	element item, temp;
	
	item = h->heap[1]; // 루트 노드 값을 반환을 위하여 item 변수로 루트를 옮깁니다. 
	temp = h->heap[(h->heap_size)--]; // 말단 노드를 루트 노드로 옮긴다.
	// 히프의 크기를 하나 줄인다. 
	parent = 1; // parent는 루트노드 
	child = 2;  // child는 왼쪽노드  
	while(child <= h->heap_size) { //  왼쪽 노드가 히프트리의 크기보다 작거나 같으면
	// 즉 히프 트리를 벗어나지 않았을 때 
		// 현재 노드의 자식 노드 중 더 큰 자식 노드를 찾는다.
		if((child < h->heap_size) && (h->heap[child].key) < h->heap[child+1].key) 
		// 왼쪽 노드가 히프의 크기보다 작고 히프의 왼쪽노드의 Key는  히프의 오른쪽 노드
		// 의 Key 값 보다 작을 때 
		child++; // 왼쪽 노드가 하나 증가한다. 
		if(temp.key >= h->heap[child].key) break; // temp의 key가  child의 키보다 
		//  크거나 같다면 while문을 바로 빠져 나갑니다. 
		// 한단계 아래로 이동
		h->heap[parent] = h->heap[child]; // child는 새로운 부모 노드가 되고 
		parent = child; // child는 parent에 저장되고  
		child *= 2; //  한 단계 아래로 내려가서 반복합니다. 
		}
		h->heap[parent] = temp; // while문을 빠져나오면 temp는 parent가 되고 
		return item; // item은 반환됩니다. 
}
void main()
{
	element e1 = {10}, e2={5}, e3={30};
	element e4, e5, e6;
	HeapType heap; // 히프 생성
	
	init(&heap);
	// 삽입
	insert_max_heap(&heap, e1);
	insert_max_heap(&heap, e2);
	insert_max_heap(&heap, e3);
	print_heap(&heap);
	// 삭제
	e4 = delete_max_heap(&heap);
	printf("< %d > ", e4.key);
	e5= delete_max_heap(&heap);
	printf("<%d>", e5.key);
	e6 = delete_max_heap(&heap);
	printf("<%d>", e6.key;
	
}

void heap_sort(element a[], int n)
{
	int i;
	HeapType h; // HeapType h를 생성 
	
	init(&h); // 생성된 히프 h를 초기화 시켜준다. 
	for(i=0; i<n; i++) { // 정렬할  n요소만큼  반복한다. 
		insert_max_heap(&h, a[i]); // a[i]에 있는 요소들이 최대 힙에 삽입한다.
		// 하나씩 요소를 히프에서 꺼내서 배열의 뒤부터 저장하게 된다. 
	} 
	for(i=(n-1); i>=0; i--) { // i가 정렬해야될 요소의 갯수보다 -1 일때
	// i가 0보다 같거나 클 때까지 반복한다. 
		a[i] = delete_max_heap(&h); // a[i]에 h에서 값을 반환해와 정렬한다.
		// 삭제된 요소들은 값이 감소되는 순서로 정렬된다. 
	}
 } 





