#include<stdio.h>
#include<stdlib.h>


int main(){
	int N, sum = 0;
	float avg;
	int count = 0; // 평균보다 높은 학생 수 
	int *score;
	float per;
	
	//score = (int*)malloc(N*sizeof(int));
	
	scanf("%d",&N);
	
	score = (int*)malloc(N*sizeof(int));
		
	for(int i = 0 ; i < N ; i++){
		scanf("%d",score + i);
		sum += *(score + i);
	}
	
	avg = sum/N;
	
	for(int j = 0 ; j < N ; j++){
		if(*(score + j) > avg){
			count++;
		}
	}
	per = count/N*100;
	printf("%.4f", per); 
	
	free(score);
	
	return 0;
}
