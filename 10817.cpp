#include<stdio.h>

int main(){
	int num1, num2, num3;
	int sub12, sub13, sub23;
	
	scanf("%d %d %d", &num1, &num2, &num3);
	
	sub12 = num1 - num2;
	sub13 = num1 - num3;
	sub23 = num2 - num3;
	
	/* 6가지의 대소관계 정의 */ 
	if(sub12 > 0){
		if(sub23 > 0){  
			printf("%d", num2);	// 1 > 2 > 3
		}else{ 
			if(sub13 > 0){ 
			    printf("%d", num3); // 1 > 3 > 2
			}else{ 
				printf("%d", num1); // 3 > 1 > 2 
			}
		}
	}else{ 
		if(sub23 > 0){ 
			if(sub13 > 0){ 
			    printf("%d", num1); // 2 > 1 > 3 
			}else{ // 3 > 1
			    printf("%d", num3); // 2 > 3 > 1
			}
		}else{ 
		    printf("%d", num2); // 3 > 2 > 1
		}
	}
	
	return 0;
}
