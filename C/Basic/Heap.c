/
#include <stdio.h>
#define MAX_ELEMENT 200
typedef struct {
	int key;
} element; // ��� �ȿ� ����ִ� Key�� element�� Ÿ������
typedef struct {
	element heap[MAX_ELEMENT]; // heap�� �迭�� �����ȴ�.
	int heap_size; // ���� ���� �ȿ� ����� ����� ������ ��Ÿ��
} HeapType; // ����ü�� ���� Ÿ�Կ� ���ؼ� ����ü�� �����Ѵ�.

// init �Լ��� �ʱ�ȭ �Լ���. heap�� �ʱ�ȭ �����ش�.
init(HeapType *h)
{
	h-> heap_size = 0;
}

void insert_max_heap(HeapType *h, element item)
{
	int i;
	i = ++(h->heap_size); // ������ ũ�⸦ �ϳ� ������Ų �� 
	// ������ ���� ũ�� ��ġ�� ���ο� ��带 �����Ѵ�.
	
	// Ʈ���� �Ž��� �ö󰡸鼭 �θ� ���� ��ȭ�� ����
	while((i != 1) && (item.key > h->heap[i/2].key)) {
		// i�� ��Ʈ ��尡 �ƴϰ� i��° ��尡 i�� �θ� ��庸�� Ŭ ���
		h -> heap[i] = h->heap[i/2]; // i��° ���� �θ� ��尡 ��ȯ�ȴ�.
		i /= 2; // i���� �� ���� ���� �ö󰣴�.
	} // i�� ��Ʈ ��尡 �ǰų� �����Ϸ��� key�� �θ� ��庸�� ���� ��� 
	// wile���� ���������� �ȴ�.
	h->heap[i] = item; // ���������� ������ ��ġ�� ������ �� 
                       // �� ������ i��  item�� �ִ´�. 
}

element delete_max_heap(HeapType *h)
{
	int parent, child;
	element item, temp;
	
	item = h->heap[1]; // ��Ʈ ��� ���� ��ȯ�� ���Ͽ� item ������ ��Ʈ�� �ű�ϴ�. 
	temp = h->heap[(h->heap_size)--]; // ���� ��带 ��Ʈ ���� �ű��.
	// ������ ũ�⸦ �ϳ� ���δ�. 
	parent = 1; // parent�� ��Ʈ��� 
	child = 2;  // child�� ���ʳ��  
	while(child <= h->heap_size) { //  ���� ��尡 ����Ʈ���� ũ�⺸�� �۰ų� ������
	// �� ���� Ʈ���� ����� �ʾ��� �� 
		// ���� ����� �ڽ� ��� �� �� ū �ڽ� ��带 ã�´�.
		if((child < h->heap_size) && (h->heap[child].key) < h->heap[child+1].key) 
		// ���� ��尡 ������ ũ�⺸�� �۰� ������ ���ʳ���� Key��  ������ ������ ���
		// �� Key �� ���� ���� �� 
		child++; // ���� ��尡 �ϳ� �����Ѵ�. 
		if(temp.key >= h->heap[child].key) break; // temp�� key��  child�� Ű���� 
		//  ũ�ų� ���ٸ� while���� �ٷ� ���� �����ϴ�. 
		// �Ѵܰ� �Ʒ��� �̵�
		h->heap[parent] = h->heap[child]; // child�� ���ο� �θ� ��尡 �ǰ� 
		parent = child; // child�� parent�� ����ǰ�  
		child *= 2; //  �� �ܰ� �Ʒ��� �������� �ݺ��մϴ�. 
		}
		h->heap[parent] = temp; // while���� ���������� temp�� parent�� �ǰ� 
		return item; // item�� ��ȯ�˴ϴ�. 
}
void main()
{
	element e1 = {10}, e2={5}, e3={30};
	element e4, e5, e6;
	HeapType heap; // ���� ����
	
	init(&heap);
	// ����
	insert_max_heap(&heap, e1);
	insert_max_heap(&heap, e2);
	insert_max_heap(&heap, e3);
	print_heap(&heap);
	// ����
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
	HeapType h; // HeapType h�� ���� 
	
	init(&h); // ������ ���� h�� �ʱ�ȭ �����ش�. 
	for(i=0; i<n; i++) { // ������  n��Ҹ�ŭ  �ݺ��Ѵ�. 
		insert_max_heap(&h, a[i]); // a[i]�� �ִ� ��ҵ��� �ִ� ���� �����Ѵ�.
		// �ϳ��� ��Ҹ� �������� ������ �迭�� �ں��� �����ϰ� �ȴ�. 
	} 
	for(i=(n-1); i>=0; i--) { // i�� �����ؾߵ� ����� �������� -1 �϶�
	// i�� 0���� ���ų� Ŭ ������ �ݺ��Ѵ�. 
		a[i] = delete_max_heap(&h); // a[i]�� h���� ���� ��ȯ�ؿ� �����Ѵ�.
		// ������ ��ҵ��� ���� ���ҵǴ� ������ ���ĵȴ�. 
	}
 } 





