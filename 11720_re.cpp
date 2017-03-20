#include<stdio.h>

int main(){
	int numofnum; // 자리 수 
	int input_num; // 그 자리 수(numofnum)를 가진 입력 숫자 
	int sum; // 각 자리 수 더한 값 
	int n;
	
	scanf("%d",&numofnum); // 자리 수 입력 
	int arr[numofnum] = {0,}; // 자리 수만큼 정수 배열 생성 
	
	scanf("%d",&input_num); // 각 자리의 수를 더할 숫자 입력 
	
	/*	
	while(numofnum > 0){
		arr[numofnum - 1] = input_num%10;
		
		printf("%d\n", arr[numofnum - 1]); // TEST
		
		input_num /= 10;
		
		sum += arr[numofnum - 1];
				
		numofnum--;
	}
	*/
	
	for(int i = 0 ; i < numofnum ; i++){
		arr[i] = input_num%10;
		printf("%d\n",arr[i]);
		input_num /= 10;
		
		sum += arr[i];
	}
	
	printf("%d",sum);
	
	return 0;
}
