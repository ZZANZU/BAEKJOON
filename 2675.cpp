#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int isspecial(char);

int main(){
	char **str;
	int T; // test number
	int *repeat_num; // ���� �ݺ� Ƚ�� 
	int j = 0;
	
	scanf("%d", &T); // �׽�Ʈ ���̽� �� �Է� 
	
	// �޸� ���� �Ҵ� 
	str = (char**)malloc(sizeof(char)*T);
	repeat_num = (int*)malloc(sizeof(int)*T);
	
	// 2���� �迭 �Ҵ�(�Է� ���ڿ�) 
	for(int i = 0 ; i < T ; i++){
		str[i] = (char*)malloc(sizeof(char) * 21);
	}
	
	// �ݺ� Ƚ��, �Է� ���ڿ� �Է� 
	for(int i = 0 ; i < T ; i++){
		scanf("%d %s", &repeat_num[i], str[i]);
	}
	
	// ��� 
	for(int i = 0 ; i < T ; i++){ // i : �׽�Ʈ ���̽� ���� 
		while(isupper(str[i][j]) == 1 || isdigit(str[i][j]) == 1 || isspecial(str[i][j]) == 1){
			for(int k = 0 ; k < repeat_num[i] ; k++){
				printf("%c", str[i][j]);
			}
			j++;
		}
		printf("\n");
		j = 0;
	}
	
	// �޸� ���� 
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
