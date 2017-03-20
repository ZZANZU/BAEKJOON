#include<stdio.h>
#include<math.h>

int get_len(int); 

int main(){
	int input_num1, input_num2;
	int reversed_num1 = 0, reversed_num2 = 0;
	int check = 1;
	
	scanf("%d %d", &input_num1, &input_num2);
	
	for(int i = 0 ; i < 3 ; i++){
		reversed_num1 += (input_num1/check%10)*pow(10.0, 2 - i);
		check *= 10;
	}
	
	check = 1;
	
	for(int i = 0 ; i < 3 ; i++){
		reversed_num2 += (input_num2/check%10)*pow(10.0, 2 - i);
		check *= 10;
	}
	
	if(reversed_num1 < reversed_num2){
		printf("%d", reversed_num2);
	}else{
		printf("%d", reversed_num1);
	}
	
	return 0;

}

/* 자리 수 구하는 함수 
int get_len(int input_num){
	int i = 0;
	int check = 10;
	
	while(input_num/check){
		i++;
		check *= 10;
	}
	
	return i+1;
}
*/
