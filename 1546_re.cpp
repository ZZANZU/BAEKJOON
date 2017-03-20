#include<stdio.h>

/*
ERROR #1 : 모든 score가 0인 경우
*/
 
int main(){
	int score[1000];
	int N;
	double sum, max = 0;
	
	scanf("%d",&N);
	
	// Get Scores 
	for(int i = 0 ; i < N ; i++){
		scanf("%d",&score[i]);
	}
	// Find Maximum
	for(int i = 0 ; i < N ; i++){
		if(score[i] >= 0 && score[i] <= 100){ // ERROR 발견 : 등호 안써줘서 100점을 max로 구하지 못함. 
			if(max < score[i]){
				max = score[i];
			}
		}
	}
	// Convert scores
	for(int i = 0 ; i < N ; i++){
		if(max > 0){ 
			score[i] = score[i]/max*100;
			sum += score[i];
			printf("score[%d] : %d\n",i,score[i]); // Test
		}
	}
	// Print average from converted scores
	printf("%.2f",sum/N);
	
	return 0;
}
