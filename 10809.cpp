#include<stdio.h>
#include<string.h>

/* ���� : ���� ���ĺ��� ������ ������ �� ó�� �����ϴ� ��ġ�� ��µǵ���! */

int main(){
	int alphabet[26];
	bool check[26] = {false,}; // ������ ���� ���ĺ����� ���� 
	char string[100]; // �Է� ���ڿ� 
	int len, addr; // �Է� ���ڿ��� ����, ���ĺ��� index 
	
	scanf("%s", &string);
	len = strlen(string);
	
	// ���ĺ����� ��� -1�� �ʱ�ȭ 
	for(int i = 0 ; i < 26 ; i++){
		alphabet[i] = -1;
	}
	
	// ���ĺ����� ��ġ Ȯ�� �� ���� 
	for(int i = 0 ; i < len ; i++){
		
		addrs = int(int(string[i]) - 97); // ���ĺ�(a : 0, b : 1 ...) 
		
		if(check[addrs] == false){
		    alphabet[addrs] = i;
		    check[addrs] = true; // ���Ŀ� ���� ���ĺ��� ������ line26�� �Ҵ��� �Ͼ�� ���� 
		}
		
	}
	
	for(int i = 0 ; i < 26 ; i++){
		printf("%d ",alphabet[i]);
	}
	
	return 0;
}
