#include<stdio.h>
#include<stdlib.h>

int maximum(int *);

/*
1. 최대값 고르기(M)
2. 모든 점수에 대하여 '점수/M*100'으로 바꾸기
3. 바뀐 점수들로 평균 구하기
*/
 
int main(){
	int M, N; // 점수의 최대값, 과목의 개수
	int *arr; // 점수 저장 메모리
	double *arr_changed;
	int sum = 0; 
	double avg; // 평균을 구하기 위한 총합, 평균 
	
	scanf("%d", &N);	
	
	arr = (int*)malloc(N*(sizeof(int)));
	arr_changed = (double*)malloc(N*sizeof(double));
	
	for(int i = 0 ; i < N ; i++){
		scanf("%d", arr+i); 
	}
	
	M = maximum(arr);	// 최고 점수 고르기 , 정상 작동중 
	//printf("%d\n",M);
	//printf("%d %d\n", sizeof(arr), sizeof(arr_changed)); //debugging , 왜 항상 8이 나오지 
	
	for(int j = 0 ; j < N ; j++){    // 점수 변환 
		*(arr_changed+j) = *(arr+j)/M*100;
		sum += *(arr_changed+j); // 평균을 구하기 위해 총 합 구하기
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
