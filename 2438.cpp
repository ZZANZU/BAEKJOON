#include<stdio.h>

int main(){
	int input_num = 0;
	
	scanf("%d", &input_num);
	
	for(int i = 0 ; i < input_num ; i++){
		for(int j = 0 ; j < i ; j++){
			printf(" ");
		}
		for(int k = input_num - i ; k > 0 ; k--){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
