#include<stdio.h>
int main() {
	int n;
	int score[1000];
	double average[1000]; 
	
	scanf("%d", &n);
	for(int i=0; i<n; i++) {
		int sum = 0;  // 전체 합 
		int average1 = 0; // 평균 
		int sum1 = 0; // 평균보다 높은 학생수 
		int c;    // 학생수
		
		scanf("%d", &c); // 학생수 입력 
		for(int j=0; j<c; j++) { 
			scanf("%d", &score[j]); // 점수 입력 
		}
		for(int k=0; k<c; k++) {
			sum += score[k]; // 전체 총합 
		}
		average1 = sum / c; // 평균 도출
		for(int m=0; m<c; m++) {
			if(score[m]>average1)
			  sum1++;
		} 
		average[i] = ((double)sum1 / (double)n)*100; // 강제 형변환을 시켜준후 소수라서 100을 곱함. 
	}
	for(int i=0; i<n; i++)
	  printf("%.3lf%%\n", average[i]); // %%로 %를 나타내고 .3lf로 소수점 3번쨰 숫자까지  
}
