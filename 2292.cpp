#include<stdio.h>
#include<math.h>

double diff_seq(int);

int main(){
	/*
	int n = 1;
	double num = 0;
	
	while(num < 1000000000){
		num = 3*pow(double(n),2.0) - 9*n + 8;
		n++;
	}
	
	printf("%d", n);
	*/
	
	
	int input_num;
	
	scanf("%d", &input_num);
	
	for(int i = 1 ; i < 18261 ; i++){
		if(input_num == 1){
			printf("1");
			break;
		}else if(diff_seq(i) <= input_num && input_num < diff_seq(i+1)){
			printf("%d",i);
			break;
		}
	}
	
	return 0;
}

// 계차수열 : 3n^2 - 9n + 8  
double diff_seq(int n){
	double num;
	
	num = 3*pow(double(n),2.0) - 9*n + 8;
	
	return num;
}
