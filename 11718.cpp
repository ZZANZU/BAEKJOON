#include<stdio.h>

int main() {
	char str[100];
    int cnt = 1;
    
    while(*gets(str) == EOF){ // NULL�̸� ����ġ�� ���� 
    	puts(str);
    	cnt++;
    	if(cnt == 101){
    		break;
		}
	}
    return 0;
}

