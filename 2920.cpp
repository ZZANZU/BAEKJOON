#include<stdio.h>

/*
�־��� 8���� ���ڿ���
ù �ΰ��� ������ ��� ���踦 �� ��
�� ���谡 ���������� �����ȴٸ� ascending �Ǵ� descending ���
�߰��� �� ���谡 �������� �ʴ´ٸ� mixed ��� �� ���α׷� ���� 
*/

int main(){
	int num[8];
	bool check = true;
	int j;
	
	for(int i = 0 ; i < 8 ; i++){
		scanf("%d", &num[i]);
	}
	
	
	if(num[0] < num[1]){ // ascending ���� Ȯ�� 
		j = 0;
		while(num[j] < num[j+1]){
			if(j == 6 ){ // ascending Ȯ�� 
				printf("ascending");
				return 0;
			}
			j++;
		}
		printf("mixed"); // while���� �߰��� �����, mixed Ȯ�� 
	}else if(num[0] > num[1]){ // descending ���� Ȯ�� 
		j = 0;
		while(num[j] > num[j+1]){
			if(j == 6){
				printf("descending"); // descending Ȯ�� 
				return 0;
			}
			j++;
		}
		printf("mixed"); // while���� �߰��� �����, mixed Ȯ�� 
	}
	
	return 0; 
} 
