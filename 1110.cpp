#include<stdio.h>

/*-----------------------------------------------------------
1. 0���� ũ�ų� ����, 99���� �۰ų� ���� '����'�� �־�������.
2. 10���� ���� ���� �־����� 0�� �ٿ��� ���ڸ����� �ٲ�.
3. ����
cycle : ����Ŭ�� ����
num : �־��� ����(���� ���� N)
changed_num : ���ο� �� 
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
		changed_num = (num%10)*10 + ((num/10)+(num%10))%10; // '10���ڸ� + 1���ڸ�' ��
	}else{
		return 0;
	}
	return changed_num;
}


