#include<stdio.h>

int main(){
	int input_num = 0;
	
	scanf("%d", &input_num);
	
	for(int i = 1 ; i < 10 ; i++){
		printf("%d * %d = %d\n", input_num, i, input_num*i);
	}
	
	return 0;
}
