#include<stdio.h>
#include<math.h> // �����Լ� : pow(��,����) 


/* �����÷ο� �߻�(numofnum�� 10 �̻��� �� ��)*/ 
int main(){
	int numofnum; // �ڸ� �� 
	int input_num; // �� �ڸ� ��(numofnum)�� ���� �Է� ���� 
	int power; // ������
	int sum; // �� �ڸ� �� ���� �� 
	
	scanf("%d",&numofnum); // �ڸ� �� �Է� 
	int arr[numofnum]; // �ڸ� ����ŭ ���� �迭 ���� 
	
	scanf("%d",&input_num); // �� �ڸ��� ���� ���� ���� �Է� 
		
	for(int i = 0 ; i < numofnum ; i++){
		power = pow(10,numofnum-i);
		arr[numofnum-i-1] = (input_num%power/(power/10)); // �� �ڸ� �� ���ϴ� ��� 
		sum += arr[numofnum-i-1]; // �� �ڸ� �� ���ϱ� 
	} 
	
	printf("%d",sum);
	
	return 0;
}
