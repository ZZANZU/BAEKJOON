#include<stdio.h>
#include<stdlib.h>

/* 이건 왜 안될까? 
int main() {
	int n,x;
	
	scanf("%d %d", &n, &x);
	int arr[n]; // 수열 생성
	
	// 이 부분에서 에러나는 듯? 
	for(int i = 0 ; i < n ; i++){
		scanf("%d", arr[i]);
	}
	
	for(int j = 0 ; j < n ; j++){
		if(arr[j] < x){
			printf("%d ", arr[j]);
		}
	}
	return 0;
}
*/

// 동적으로 배열을 할당할 때는 malloc으로! 
int main(){
	int n,x; // n : 수열의 개수, x : 출력하고자 하는 기준 수 
	int *arr;  
	
	scanf("%d %d", &n, &x);
	
	arr = (int*)malloc(n*sizeof(int)); // 동적 할당 
	
	for(int i = 0 ; i < n ; i++){
		scanf("%d", arr+i);
	}
	
	for(int i = 0 ; i < n ; i++){
		if(*(arr+i) < x){
			printf("%d ", *(arr+i));
		}
	}
	
	return 0;
	
} 
