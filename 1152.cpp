#include<stdio.h>
#include<string.h>
//#include<stdlib.h>
//#include<ctype.h>

int main(){
	char str[1000001];
	int len, count = 0; // str : �Է¹��� ������ ����, count : ������ ���� 
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
	
	printf("%d", count); // �� count+1 ? : ���� ���� + 1 �� �ܾ��� �����ϱ�. 
	
	return 0; 
}
