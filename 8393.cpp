#include<stdio.h>

int main(){
	int input_num;
	int sum = 0;
	
	scanf("%d", &input_num);
	
	for(int i = 1 ; i <= input_num ; i++){
		sum += i;
	}
	
	printf("%d\n", sum);
	
	return 0;
}
