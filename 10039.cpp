#include<stdio.h>

/*
5개의 점수를 입력받고, 각 점수가 만약 40 미만이라면 그 점수를 40점으로 바꿈. 
*/
int main(){
	int score[5];
	int sum = 0;
	
	for(int i = 0 ; i < 5 ; i++){
		scanf("%d", &score[i]);
	}
	
	// 40 미만인지 check 후, 40으로 변경 
	for(int i = 0 ; i < 5 ; i++){
		if(score[i] < 40){
			score[i] = 40;
		}
	}
	
	// 평균을 구하기 위한 점수 총합 구하기 
	for(int i = 0 ; i < 5 ; i++){
		sum += score[i];
	}
	
	printf("%d", sum/5); // 평균(sum/5) 출력 
	
	return 0;
}
