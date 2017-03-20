#include<stdio.h>
#include<ctype.h> 

/* 4번재 수정 
   : line 29, 39  '!=' -> '>'
   : line 32, 42  '0' -> '1'
*/
int main(){
	int lower_str[26] = {0,}; 
	int upper_str[26] = {0,}; 
	char input_str[1000001];
	int i = 0, max = 0, index = 0; 
	int count = 0; 
	int lower_max = 0, upper_max = 0;
	int lower_index = 0, upper_index = 0;
	
	scanf("%s", &input_str);
	
	while(isalpha(input_str[i]) != 0){
		if(isupper(input_str[i]) != 0){
			upper_str[int(input_str[i]) - 65]++; 
		}else if(islower(input_str[i]) != 0){
			lower_str[int(input_str[i]) - 97]++;  
		}
		i++;
	}

	for(int i = 0 ; i < 26 ; i++){
		if(upper_max < upper_str[i] && upper_str[i] > 1){
			upper_max = upper_str[i];
			upper_index = i;
		}else if(upper_max == upper_str[i] && upper_str[i] > 1){
			count++;
			//printf("upper에서 count 증가, @ %d\n", i);
		}
	}
	
	for(int i = 0 ; i < 26 ; i++){
		if(lower_max < lower_str[i] && lower_str[i] > 1){
			lower_max = lower_str[i];
			lower_index = i;
		}else if(lower_max == lower_str[i] && lower_str[i] > 1){ // 같은 소문자 중에서 출현 횟수가 같은 경우 
			count++;
			//printf("lower에서 count 증가, %d\n", i);  
		}
	}
	
	/*  출력 */
	if(count == 0){ 
		if(lower_max > upper_max){
			printf("%c", lower_index + 97);
		}else if(lower_max < upper_max){
			printf("%c", upper_index + 97);
		}else if(lower_max == upper_max){
			printf("?");
		}
	}else if(count != 0){
		printf("?");
	}
	
	return 0;
}
