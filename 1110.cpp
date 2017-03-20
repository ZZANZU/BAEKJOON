#include<stdio.h>

/*-----------------------------------------------------------
1. 0보다 크거나 같고, 99보다 작거나 같은 '정수'가 주어져야함.
2. 10보다 작은 수가 주어지면 0을 붙여서 두자리수로 바꿈.
3. 변수
cycle : 사이클의 길이
num : 주어진 숫자(문제 상의 N)
changed_num : 새로운 수 
-----------------------------------------------------------*/
int change(int );

int main(){
	int num,changed_num = 0;
	int cycle = 0;
	int running = 1;
	int temp;
	
	scanf("%d", &num);
	
	while(running){
		if(cycle == 1){
		    changed_num = change(num);	
		}
				
	    if(num != changed_num){
		    cycle++;
		    changed_num = change(changed_num);
	    }else if(num == changed_num){
		    printf("%d", cycle);
		    running = 0;
	    }	
	}
	
	return 0;
} 

int change(int num){
	int changed_num;
	
	if(num < 10 && num > 0){
		changed_num = num*10;
	}else if(num < 100 && num > 9){
		changed_num = (num%10)*10 + ((num/10)+(num%10))%10; // '10의자리 + 1의자리' 꼴
	}else{
		return 0;
	}
	return changed_num;
}


