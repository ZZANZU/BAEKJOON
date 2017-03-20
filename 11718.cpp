#include<stdio.h>

int main() {
	char str[100];
    int cnt = 1;
    
    while(*gets(str) == EOF){ // NULL이면 엔터치면 끝남 
    	puts(str);
    	cnt++;
    	if(cnt == 101){
    		break;
		}
	}
    return 0;
}

