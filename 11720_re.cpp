#include<stdio.h>

int main(){
	int numofnum; // �ڸ� �� 
	int input_num; // �� �ڸ� ��(numofnum)�� ���� �Է� ���� 
	int sum; // �� �ڸ� �� ���� �� 
	int n;
	
	scanf("%d",&numofnum); // �ڸ� �� �Է� 
	int arr[numofnum] = {0,}; // �ڸ� ����ŭ ���� �迭 ���� 
	
	scanf("%d",&input_num); // �� �ڸ��� ���� ���� ���� �Է� 
	
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
