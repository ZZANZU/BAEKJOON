#include<stdio.h>

/*
int main(){
	int sugar_weight = 0;
	
	scanf("%d", &sugar_weight);
	
	if(((sugar_weight)%5%3) == 0){
		printf("%d", sugar_weight/5 + ((sugar_weight)%5)/3);
		return 0;
	}
	else if(sugar_weight%3 == 0){
		printf("%d", sugar_weight/3);
		return 0;
	}
	else{
		printf("-1");
		return 0;
	}
}
*/

// Debugging

int main(){
	int sugar_weight = 0;

while(1){
	scanf("%d", &sugar_weight);
	
	if(((sugar_weight)%5) == 0){  // 5의 배수, 15의 배수  
		printf("%d\n", sugar_weight/5 );
	}
	else if(sugar_weight%3 == 0){ //3의 배수 
		if((sugar_weight/5-1)*5 + 6 == sugar_weight){ // 3의 배수 중에 6, 21, 36, 51 같은 수들 
			printf("%d\n",(sugar_weight/5-1)+2);
		}else{ // 위 조건을 제외한 3의 배수 
			printf("%d\n", sugar_weight/3);	
		}
	}
	else if(sugar_weight%15 == 1 || sugar_weight == 11){ // 16, 31, 46, 61같은 수들 
		if(sugar_weight == 1){ // 1 제외 
			printf("-1\n");
		}
		else{
			printf("%d\n", (sugar_weight/5-1)+2);	
		}
	} 
	else{
		printf("-1\n");
	}
}
}		

