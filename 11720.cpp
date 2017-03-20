#include<stdio.h>
#include<math.h> // 제곱함수 : pow(밑,지수) 


/* 오버플로우 발생(numofnum이 10 이상이 될 때)*/ 
int main(){
	int numofnum; // 자리 수 
	int input_num; // 그 자리 수(numofnum)를 가진 입력 숫자 
	int power; // 제곱값
	int sum; // 각 자리 수 더한 값 
	
	scanf("%d",&numofnum); // 자리 수 입력 
	int arr[numofnum]; // 자리 수만큼 정수 배열 생성 
	
	scanf("%d",&input_num); // 각 자리의 수를 더할 숫자 입력 
		
	for(int i = 0 ; i < numofnum ; i++){
		power = pow(10,numofnum-i);
		arr[numofnum-i-1] = (input_num%power/(power/10)); // 각 자리 수 구하는 산식 
		sum += arr[numofnum-i-1]; // 각 자리 수 더하기 
	} 
	
	printf("%d",sum);
	
	return 0;
}
