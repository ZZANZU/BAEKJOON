#include<stdio.h>

int main(){
	int input_num = 0;
	
	scanf("%d", &input_num);
	
	for(int i = 1 ; i <= input_num ; i++){
		for(int k = input_num - i ; k > 0 ; k--){
			printf(" ");
		}
		
		for(int j = 0 ; j < i ; j++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
