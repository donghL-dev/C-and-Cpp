
void selection_sort(int list[], int n)
{
	int i, j, least, temp;
	for(i=0; i<n-1; i++) {
		least = i;
		for(j=i+1; j<n; j--)
		   if(list[j]<list[least]) least = j;
		SWAP(list[i], list[least], temp);   
	}
} // O(n^2), 10,842sec

void insertion_sort(int list[], int n)
{
	int i, j, key;
	for(i=1; i<n; i++) {
		key = list[i];
		for(j=i-1; j>=0 && list[j]>key; j--)
		  list[j+1] = list[j];
		list[j+1] = key;  
	}
} // O(n), 7,438 sec

void bubble_sort(int list[], int n)
{
	int i, j, temp;
	for(i=n-1; i>0; i--) {
		for(j=0; j<i; j++)
		   if(list[j]>list[j+1])
		     SWAP(list[j], list[j+1], temp);
	}
} // O(n^2), 22,894sec

inc_insertion_sort(int list[], int first, int last, int gap)
{
	int i, j ,key;
	for(i=first+gap; i<=last; i=i+gap) {
		key = list[i];
		for(j=i-gap; j>=first && key<list[j]; j=j-gap)
		  list[j+gap] = list[j];
		list[j+gap] = key;  
	}
}

void shell_sort(int list[], int n)
{
	int i, gap;
	for(gap=n/2; gap>0; gap=gap/2) {
		if((gap%2)==0) gap++;
		  for(i=0; i<gap; i++)
		    inc_insertion_sort(list, i, n-1, gap);
	}
} // O(n), 0.056sec

void marge(int list[], int left, int mid, int right)
{
	int i, j, k, l;
	l=left; j=mid+1; k=left;
	
	while(i<=mid && j<=right) {
		if(list[i]<=list[j])
		   sorted[k++]=list[i++];
		else
		   sorted[k++]=list[j++];   
	}
	if(i>mid)
	  for(l=j; l<=right; l++)
	    sorted[k++]=list[l];
	else
	  for(l=i; l<=mid; l++)
	     sorted[k++]=list[l];
	for(l=left; l<=right; l++)
	   list[l]=sorted[l];	     
}

void marge_sort(int list[], int left, int right)
{
	int mid;
	if(left<right) {
		mid = (left+right)/2;
		marge_sort(list, left, mid);
		marge_sort(list, mid, right);
		marge(list, left, mid, right);
	}
} //0.026 O(nlog2n)

int partition(int list[], int left, int right)
{
	int pivot, temp;
	int low, high;
	low = left;
	high = right+1;
	pivot = list[left];
	do{
		do
		   low++;
		while(low <= right && list[low]<pivot);
		do
		   high--;
		while(high >= left && list[high]>pivot);
		if(low<high) SWAP(list[low], list[high], temp);      
	} while(low<high);
	
	SWAP(list[left], list[high], temp);
	return high;
}


void quick_sort(int list[], int left, int right)
{
	if(left<right) {
		int q=partiton(list, left, right);
		quick_sort(list, left, q-1);
		quick_sort(list, q+1, right);
	}
} // O(nlog2n), 0.014sec


void heap_sort(element a[], int n)
{
	int i;
	HeapType h;
	
	init(&h);
	for(i=0; i<n; i++) {
		insert_heap_max(&h, a[i]);
	}
	for(i=(n-1); i>=0; i--) {
		a[i] = delete_max_heap(&h);
	}	   
} // O(nlog2n), 0.034 sec


void radix_sort(int list[], int n)
{
	int i, b, d, factor=1;
	QueueType queues[BUCKETS];
	
	for(b=0; b<BUCKETS; b++) init(&queues[b]);
	
	for(d=0; d<DIGITS; d++) {
		for(i=0; i<n; i++)
		   enqueue(&queues[(list[i]/factor)%10], list[i]);
		for(b=i=0; b<BUCKETS; b++)
		   while(!is_empty(&queues[b]))
		      list[i++]=dequeue(&queues[b]);
		factor*=10;	     
		// O(dn)   
	}
	}
void radix_sort(int list[], int n)
{
	int i, b, d, factor=1;
	QueueType queues[BUCKETS];
	
	for(b=0; b<BUCKETS; b++) init(&queues[b]);
	for(d=0; d<DIGITS; d++) {
		for(i=0; i<n; i++)
		  enqueue(&queues[(list[i]/factor)%10], list[i]);
		
		for(b=i=0; b<BUCKETS; b++)
		   while(!is_empty(&queues[b])) 
		     list[i++] = dequeue(&queues[b]);
		factor*=10;	  
	} // O(dn)
}
