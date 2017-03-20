#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int isspecial(char);

int main(){
	char **str;
	int T; // test number
	int *repeat_num; // 문자 반복 횟수 
	int j = 0;
	
	scanf("%d", &T); // 테스트 케이스 수 입력 
	
	// 메모리 동적 할당 
	str = (char**)malloc(sizeof(char)*T);
	repeat_num = (int*)malloc(sizeof(int)*T);
	
	// 2차원 배열 할당(입력 문자열) 
	for(int i = 0 ; i < T ; i++){
		str[i] = (char*)malloc(sizeof(char) * 21);
	}
	
	// 반복 횟수, 입력 문자열 입력 
	for(int i = 0 ; i < T ; i++){
		scanf("%d %s", &repeat_num[i], str[i]);
	}
	
	// 출력 
	for(int i = 0 ; i < T ; i++){ // i : 테스트 케이스 개수 
		while(isupper(str[i][j]) == 1 || isdigit(str[i][j]) == 1 || isspecial(str[i][j]) == 1){
			for(int k = 0 ; k < repeat_num[i] ; k++){
				printf("%c", str[i][j]);
			}
			j++;
		}
		printf("\n");
		j = 0;
	}
	
	// 메모리 해제 
	for(int i = 0 ; i < T ; i++){
		free(str[i]);
	}
	free(str);
	
	free(repeat_num);
	
	return 0;
}

int isspecial(char c){
	if(c == '$' || c == '%' || c == '*' || c == '+' || c == '-' || c == '.' || c == '/' || c == ':'){
	    	return 1;
	}else{
			return 0;
	}
}
