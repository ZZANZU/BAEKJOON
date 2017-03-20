#include<stdio.h>

int main(){
	int student[100][1000];
	float ratio[100] = {0,}; 
	int N, C, sum = 0; 
	float count = 0, avg;
	
	scanf("%d",&C); // 테스트 케이스 
	
	for(int k = 0 ; k < C ; k++){
		scanf("%d",&N);
	
		for(int i = 0 ; i < N ; i++){
			
			scanf("%d", &student[k][i]); // student[0] == 학생 수 
			
			sum += student[k][i];
		}
	
		avg = sum/N;
	
		for(int j = 0 ; j < N ; j++){
			if(student[k][j] > avg){
				count++;
			}
		}
		
		ratio[k] = (count/N)*100;
		
		// line 32-33 :  Initializing variables 
		count = 0;
		sum = 0;
	} 
	
	// Printing
	for(int k = 0 ; k < C ; k++){
		printf("%.3f%%\n",ratio[k]); // '%' 출력은 %%로! 
	}
	
	return 0;
}
