#include<stdio.h>
#include<stdlib.h>

/* �̰� �� �ȵɱ�? 
int main() {
	int n,x;
	
	scanf("%d %d", &n, &x);
	int arr[n]; // ���� ����
	
	// �� �κп��� �������� ��? 
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

// �������� �迭�� �Ҵ��� ���� malloc����! 
int main(){
	int n,x; // n : ������ ����, x : ����ϰ��� �ϴ� ���� �� 
	int *arr;  
	
	scanf("%d %d", &n, &x);
	
	arr = (int*)malloc(n*sizeof(int)); // ���� �Ҵ� 
	
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
