#include<stdio.h>
#include<math.h>

int main(){
	int A,B,C;
	int num; // A * B * C
	double len_of_num = 0; // pow�Լ��� ���ڴ� double���̾��! 
	int count[10] = {0,}; // 0 ~ 9 ��� Ƚ�� ���� 
	int digit; // �� �ڿ����� ���� �ڸ� ����
	int temp;
	
	scanf("%d",&A);
	scanf("%d",&B);
	scanf("%d",&C);
	
	num = A*B*C;
	temp = num;// line27���� ���� ���� 
	
	// num�� �ڸ� �� ���ϱ� 
	while(num != 0){
		len_of_num++;
		num /= 10;
	}
	
	// �� �ڸ� �� �и� �� count 
	for(int j = 1 ; j <= len_of_num ; j++){
		// ������ ^�� �ƴ϶� pow(double,double)�Լ�����... �׸��� % ����ߵǴϱ� intf�� �ٲ� 
	    digit = int(temp/pow((double)10,(len_of_num - j)))%10;
		count[digit] += 1;
	}
	
	// ��� 
	for(int k = 0 ; k < 10 ; k++){
		printf("%d\n", count[k]);
	}
	
	return 0;
	
}
