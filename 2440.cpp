#include<stdio.h>

int main(){
	int input_num = 0;
	
	scanf("%d", &input_num);
	
	for(int i = input_num ; i > 0 ; i--){
		
		for(int k = i ; k > 0 ; k--){
			printf("*");
		}
		
		for(int j = input_num - i ; j > 0 ; j--){
			printf("-");
		}
		printf("\n");
	}
	
	return 0;
}
