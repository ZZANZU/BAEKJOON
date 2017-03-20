#include<stdio.h>

int main(){
	int input_num = 0;
	
	scanf("%d", &input_num);
	
	for(int i = 0  ; i < input_num ; i++){
		printf("%d\n", i+1);
	}
	
	return 0;
}
