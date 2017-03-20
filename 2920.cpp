#include<stdio.h>

/*
주어진 8개의 숫자에서
첫 두개의 숫자의 대소 관계를 본 뒤
그 관계가 마지막까지 유지된다면 ascending 또는 descending 출력
중간에 그 관계가 유지되지 않는다면 mixed 출력 후 프로그램 종료 
*/

int main(){
	int num[8];
	bool check = true;
	int j;
	
	for(int i = 0 ; i < 8 ; i++){
		scanf("%d", &num[i]);
	}
	
	
	if(num[0] < num[1]){ // ascending 인지 확인 
		j = 0;
		while(num[j] < num[j+1]){
			if(j == 6 ){ // ascending 확정 
				printf("ascending");
				return 0;
			}
			j++;
		}
		printf("mixed"); // while문이 중간에 종료됨, mixed 확정 
	}else if(num[0] > num[1]){ // descending 인지 확인 
		j = 0;
		while(num[j] > num[j+1]){
			if(j == 6){
				printf("descending"); // descending 확정 
				return 0;
			}
			j++;
		}
		printf("mixed"); // while문이 중간에 종료됨, mixed 확정 
	}
	
	return 0; 
} 
