#include<stdio.h>

/*
5���� ������ �Է¹ް�, �� ������ ���� 40 �̸��̶�� �� ������ 40������ �ٲ�. 
*/
int main(){
	int score[5];
	int sum = 0;
	
	for(int i = 0 ; i < 5 ; i++){
		scanf("%d", &score[i]);
	}
	
	// 40 �̸����� check ��, 40���� ���� 
	for(int i = 0 ; i < 5 ; i++){
		if(score[i] < 40){
			score[i] = 40;
		}
	}
	
	// ����� ���ϱ� ���� ���� ���� ���ϱ� 
	for(int i = 0 ; i < 5 ; i++){
		sum += score[i];
	}
	
	printf("%d", sum/5); // ���(sum/5) ��� 
	
	return 0;
}
