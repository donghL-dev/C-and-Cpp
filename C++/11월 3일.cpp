#include <stdio.h>
int main(void)
{
	float mat2x2[2][2];
	float inverse[2][2];
	float det;
	int i,j;
	for( i = 0; i < 2; i++ ){
printf( "%d�� �Է� ... \n", i+1 );
for( j = 0; j < 2; j++ )
{
printf( " %d�� �Է� >> ", j+1 );
scanf( "%f", &mat2x2[i][j] );
}
	printf( "\n" );
}
printf( "\n" );


// det�� ���غ��ϴ�.( a*d - b*c)
 det = mat2x2[0][0] * mat2x2[1][1] - mat2x2[0][1] * mat2x2[1][0];
 if( det == 0.0 )
 {
  printf( "������� �������� �ʽ��ϴ�.\n" );
 return 1;
 }
 // ����������� ��ġ��ı��ϱ�
// ���� ������ �����ϸ�
inverse[0][0] = mat2x2[1][1] / det;
inverse[0][1] = -mat2x2[0][1] / det;
inverse[1][0] = -mat2x2[1][0] / det;
inverse[1][1] = mat2x2[0][0] / det;
// ����� ���
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


