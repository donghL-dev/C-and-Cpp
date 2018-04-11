#include <stdio.h>
void arr(int a[3][3]) {
	int i, j;
	for(i=0; i<3; i++) {
		for(j=0; j<3; j++)
		printf("%3d", a[i][j]);
		printf("\n");
	}
}

void add(int a[3][3], int b[3][3])
{
	int i,j;
	int c[3][3];
	
	for(i=0; i<3; i++) {
		for(j=0; j<3; j++)
		 c[i][j] = a[i][j] + b[i][j];
	}
	arr(c);
}

int main() {
	int a[3][3], b[3][3];
	int i, j, yn;
	
	printf("행렬을 구성합니다. \n");
	
	while(1) {
		for(i=0; i<3; i++) {
			printf("%d 행 \n", i+1);
			for(j=0; j<3; j++) {
				scanf("%d", &a[i][j]);
			}
		}
		printf(" 입력한 행렬을 나타내면 다음과 같다. \n"); 
		arr(a);
		printf(" 해당 행렬이 맞는가 맞다면 1을 입력 : ");
		scanf("%d", &yn);
		if(yn == 1)
		break;
	} 
	
	printf("B 행렬을 구성합니다. \n");
	
	while(1) {
		for(i=0; i<3; i++) {
			printf("%d 행 \n", i+1);
			for(j=0; j<3; j++) {
				scanf("%d", &b[i][j]);
			}
		}
		printf(" 입력한 행렬을 나타내면 다음과 같다. \n"); 
		arr(b);
		printf(" 해당 행렬이 맞는가 맞다면 1을 입력 : ");
		scanf("%d", &yn);
		if(yn == 1)
		break;
	}
	
	printf(" 구성한 두 행렬을 덧셈 연산 합니다. \n");
	
	add(a, b); 
	 
}
