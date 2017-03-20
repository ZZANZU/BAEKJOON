#include<stdio.h>
#include<math.h>

int main(){
	int A,B,C;
	int num; // A * B * C
	double len_of_num = 0; // pow함수의 인자는 double형이어야! 
	int count[10] = {0,}; // 0 ~ 9 사용 횟수 저장 
	int digit; // 세 자연수의 곱의 자리 숫자
	int temp;
	
	scanf("%d",&A);
	scanf("%d",&B);
	scanf("%d",&C);
	
	num = A*B*C;
	temp = num;// line27에서 쓰기 위해 
	
	// num의 자리 수 구하기 
	while(num != 0){
		len_of_num++;
		num /= 10;
	}
	
	// 각 자릿 수 분리 및 count 
	for(int j = 1 ; j <= len_of_num ; j++){
		// 제곱은 ^이 아니라 pow(double,double)함수구나... 그리고 % 해줘야되니까 intf로 바꿈 
	    digit = int(temp/pow((double)10,(len_of_num - j)))%10;
		count[digit] += 1;
	}
	
	// 출력 
	for(int k = 0 ; k < 10 ; k++){
		printf("%d\n", count[k]);
	}
	
	return 0;
	
}
