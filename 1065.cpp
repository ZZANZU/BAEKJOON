#include<stdio.h>

/*---------------------------------------
한수인지 판별하는 함수(is_hansu()) 
---------------------------------------*/
int is_hansu(int);

int main(){
    int N, count = 0;
	
	scanf("%d", &N);
	
	for(int i = 1 ; i < N+1 ; i++){
		if(is_hansu(i) == 1){
			count++;
		}
	}
	
	printf("%d",count);
	
	return 0;
	
}
// 한수의 개수 리턴 
int is_hansu(int N){
	int d1,d2,i; // 공차1, 공차2 
	
	if(N > 0 && N < 100){
		return 1;
	}else if(N == 1000){ // 이 조건 없어서 틀림 
		return 0;
	}
	else{
		/*
		for(int i = 1 ; i < 3 ; i++){ // 3인 이유 : 1000까지니까 
		    d1 = N%(10^(i+1))/(10^(i)) - N%(10^(i));
		    d2 = N/(10^(i+1)) - N/(10^(i+2))%(10^(i));
		*/
		d1 = N%100/10 - N%10; // 둘째자리수 - 첫째자리수 
		d2 = N/100 - N%100/10; // 셋째자리수 - 둘째자리수 
		    
		if(d1 != d2){ // 이전 자리 수 != 다음 자리 수 
		    return 0;// 한수 아님! 
		}else{
			return 1;
		}
	}
}
