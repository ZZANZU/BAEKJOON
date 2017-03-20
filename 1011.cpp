#include<stdio.h>
#include<stdlib.h>

int main(){
	long long int *x, *y, *len;
	int T;
	int move_num = 0;
	bool check = true;
	
	scanf("%d", &T);
	
	x = (long long int*)malloc(sizeof(long long int*)*T);
	y = (long long int*)malloc(sizeof(long long int*)*T);
	len = (long long int*)malloc(sizeof(long long int*)*T);
	
	for(int i = 0 ; i < T ; i++){
		scanf("%d %d", &x[i], &y[i]);
		len[i] = (y[i] - 1) - x[i];
	}
	

	for(int i = 0 ; i < T ; i++){	
		move_num = 0;
		
		if(len[i] % 2 == 0){ // °Å¸®°¡ Â¦¼ö 

			while(check){
	    		if(len[i]-1 != move_num*(move_num + 1)/2){
	    			move_num++;	
				}else{
					printf("%d\n", move_num + 2);
					check = false;
				}
			}
			
		}else if(len[i] % 2 != 0){ // °Å¸®°¡ È¦¼ö 
			while(check){
				if(len[i]-1 != move_num*(move_num + 1)/2){
	    			move_num++;	
				}else{
					printf("%d\n", move_num + 2);
					check = false;
				}
			}
		}
	}
	return 0;
}
