#include<stdio.h>
#include<string.h>
//#include<stdlib.h>
//#include<ctype.h>

int main(){
	char str[1000001];
	int len, count = 0; // str : 입력받은 문장의 길이, count : 띄어쓰기의 개수 
	bool check = false;
	
	gets(str);
	
	len = strlen(str);
	
	for(int i = 0 ; i < 1000000 ; i++){
		if(str[i] == NULL){
			break;
		}else if(str[i] == ' '){
			check = false;
		}else if(str[i] != ' ' && check == false){
			check = true;
			count++;
		}
	}
	
	printf("%d", count); // 왜 count+1 ? : 띄어쓰기 개수 + 1 이 단어의 개수니까. 
	
	return 0; 
}
