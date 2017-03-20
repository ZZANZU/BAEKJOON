#include<stdio.h>
#include<string.h>

/* 주의 : 같은 알파벳이 여러개 나왔을 때 처음 등장하는 위치가 출력되도록! */

int main(){
	int alphabet[26];
	bool check[26] = {false,}; // 이전에 나온 알파벳인지 여부 
	char string[100]; // 입력 문자열 
	int len, addr; // 입력 문자열의 길이, 알파벳의 index 
	
	scanf("%s", &string);
	len = strlen(string);
	
	// 알파벳들을 모두 -1로 초기화 
	for(int i = 0 ; i < 26 ; i++){
		alphabet[i] = -1;
	}
	
	// 알파벳들의 위치 확인 및 저장 
	for(int i = 0 ; i < len ; i++){
		
		addrs = int(int(string[i]) - 97); // 알파벳(a : 0, b : 1 ...) 
		
		if(check[addrs] == false){
		    alphabet[addrs] = i;
		    check[addrs] = true; // 이후에 같은 알파벳이 오더라도 line26의 할당이 일어나지 않음 
		}
		
	}
	
	for(int i = 0 ; i < 26 ; i++){
		printf("%d ",alphabet[i]);
	}
	
	return 0;
}
