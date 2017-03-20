#include<stdio.h>
#include<stdlib.h>

// bubble sort
/*
int main(){
	int *num, n;
	int j, temp;
	
	scanf("%d", &n);
	
	num = (int*)malloc(sizeof(int)*n);
	
	for(int i = 0 ; i < n ; i++){
		scanf("%d", &num[i]);
	}
	
	for(int i = 0 ; i < n-1 ; i++ ){
		for(int j = 0 ; j < n-1 ; j++){
			if(num[j] > num[j+1]){
				temp = num[j];
				num[j] = num[j+1];
				num[j+1] = temp;
			}
		}
	}
	
	for(int i = 0 ; i < n ; i++){
		printf("%d\n",num[i]);
	}
	
	return 0;
}
*/

int main(){
	int temp;
	int a[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	
	for(int i = 0 ; i < 10 ; i++){
		for(int j = i+1 ; j < 10 ; j++){
			if(a[j] < a[i]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	
	for(int i = 0 ; i < 10 ; i++){
		printf("%d ",a[i]);
	}
	
	return 0;
}
