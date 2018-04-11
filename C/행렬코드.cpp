#include <stdio.h>
#include <stdlib.h>

void arr(int a[][3]);			//행렬 출력
void add(int a[][3],int b[][3]);	//덧셈

int main()
{
	int a[3][3],b[3][3];	//배열 초기화
	int i,j,yn;			//i,j는 for문 cho는 연산자 선택 yn은 행렬값 확인시 사용

	printf("a행렬을 입력하시오\n"); //a행렬 입력

	while(1)//무한 루프 - 행렬값 입력이 다를 시 다시 입력
	{

	for(i=0;i<3;i++)
	{
		printf("%d 행: \n",i+1);
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	printf("a 행렬은 다음과 같습니다. \n");
	arr(a);

	printf("입력한 값이 맞습니까? O[1], X[2]");
	scanf("%d",&yn);

	if(yn==1)				//맞을 시 break
		break;
	}


	printf("\n\n");


	printf("b행렬을 입력하시오\n"); //b행렬 입력

	while(1)//무한 루프 - 행렬값 입력이 다를 시 다시 입력
	{

	for(i=0;i<3;i++)
	{
		printf("%d 행: \n",i+1);
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}

	printf("b 행렬은 다음과 같습니다. \n");
	arr(b);

	printf("입력한 값이 맞습니까? O[1], X[2]");
	scanf("%d",&yn);

	if(yn==1)				//맞을 시 break
		break;
	}

	printf("\n\n");
	
	printf("행렬 간 덧셈 출력 : \n\n");

	add(a,b);

}

void arr(int a[3][3])
{
	int i,j;

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%3d",a[i][j]);
		}
		printf("\n");
	}
}
void add(int a[3][3],int b[3][3])
{
	int c[3][3];
	int i,j;

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}

	arr(c);
}
