#include<stdio.h>

int main(){
	int sugar_weight = 0 ;
	int mok5; // 5�� ���� �� 
	int remainder5; // 5�� ���� ������ 
	
	scanf("%d",&sugar_weight);
	
	mok5 = sugar_weight/5;
	
	for(; mok5 > -1 ; mok5--){
		remainder5 = sugar_weight - 5*mok5;
		if(remainder5%3 == 0){
			printf("%d\n", mok5 + remainder5/3);
			return 0;
		}	 
	}
	printf("-1\n");
	
	return 0;

}
