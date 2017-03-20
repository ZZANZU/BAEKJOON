#include<stdio.h>
#include<stdlib.h>

int maximum(int *);

/*
1. �ִ밪 ����(M)
2. ��� ������ ���Ͽ� '����/M*100'���� �ٲٱ�
3. �ٲ� ������� ��� ���ϱ�
*/
 
int main(){
	int M, N; // ������ �ִ밪, ������ ����
	int *arr; // ���� ���� �޸�
	double *arr_changed;
	int sum = 0; 
	double avg; // ����� ���ϱ� ���� ����, ��� 
	
	scanf("%d", &N);	
	
	arr = (int*)malloc(N*(sizeof(int)));
	arr_changed = (double*)malloc(N*sizeof(double));
	
	for(int i = 0 ; i < N ; i++){
		scanf("%d", arr+i); 
	}
	
	M = maximum(arr);	// �ְ� ���� ���� , ���� �۵��� 
	//printf("%d\n",M);
	//printf("%d %d\n", sizeof(arr), sizeof(arr_changed)); //debugging , �� �׻� 8�� ������ 
	
	for(int j = 0 ; j < N ; j++){    // ���� ��ȯ 
		*(arr_changed+j) = *(arr+j)/M*100;
		sum += *(arr_changed+j); // ����� ���ϱ� ���� �� �� ���ϱ�
	}
	
	avg = sum/N;
	
	printf("%.2f", avg);
	
	free(arr);
	free(arr_changed);
	
	return 0;
}

int maximum(int *arr){
	int max = *arr; 
	for(int i = 0 ; i < sizeof(arr)/sizeof(int) ; i++){
		if(*(arr+i) > max){
			max = *(arr+i);
		}
	}
	return max;
}
