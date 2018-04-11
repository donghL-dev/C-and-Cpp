#include <stdio.h>
int main(void)
{
	float mat2x2[2][2];
	float inverse[2][2];
	float det;
	int i,j;
	for( i = 0; i < 2; i++ ){
printf( "%d행 입력 ... \n", i+1 );
for( j = 0; j < 2; j++ )
{
printf( " %d열 입력 >> ", j+1 );
scanf( "%f", &mat2x2[i][j] );
}
	printf( "\n" );
}
printf( "\n" );


// det를 구해봅니다.( a*d - b*c)
 det = mat2x2[0][0] * mat2x2[1][1] - mat2x2[0][1] * mat2x2[1][0];
 if( det == 0.0 )
 {
  printf( "역행렬이 존재하지 않습니다.\n" );
 return 1;
 }
 // 여인자행렬의 전치행렬구하기
// 위의 공식을 적용하면
inverse[0][0] = mat2x2[1][1] / det;
inverse[0][1] = -mat2x2[0][1] / det;
inverse[1][0] = -mat2x2[1][0] / det;
inverse[1][1] = mat2x2[0][0] / det;
// 역행렬 출력
for( i = 0; i < 2; i++ )
{
printf( "| " );
for( j = 0; j < 2; j++ )
{
printf( "%.2f ", inverse[i][j] );
}
printf(" |\n" );
}
return 0;
}


