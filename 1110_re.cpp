#include<stdio.h>

int main(){
	int N, temp;
	int cycle = 0;
	
	scanf("%d", &N);
	temp = N;
	
	do{
	    if(N >= 0 && N <100){
		    N = (N%10)*10 + ((N/10) + (N%10))%10;
		    cycle++;
        }else{
        	break;
		}
	}while(N != temp);
	
	printf("%d", cycle);
	
	return 0;
}


