#include<stdio.h>
#include<ctype.h> 

/* 4���� ���� 
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
			//printf("upper���� count ����, @ %d\n", i);
		}
	}
	
	for(int i = 0 ; i < 26 ; i++){
		if(lower_max < lower_str[i] && lower_str[i] > 1){
			lower_max = lower_str[i];
			lower_index = i;
		}else if(lower_max == lower_str[i] && lower_str[i] > 1){ // ���� �ҹ��� �߿��� ���� Ƚ���� ���� ��� 
			count++;
			//printf("lower���� count ����, %d\n", i);  
		}
	}
	
	/*  ��� */
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
