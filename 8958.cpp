#include<stdio.h>
#include<stdlib.h>

int main(){
	int testnum, count = 0, score = 0;
	char **string;
	int j = 0;
	
	scanf("%d", &testnum); // �׽�Ʈ ���̽� ���� �Է� 
	
	// �޸� ���� �Ҵ�
	string = (char**)malloc(sizeof(char*) * testnum);
	
	for(int i = 0 ; i < testnum ; i++){
		string[i] = (char*)malloc(sizeof(char) * 81);
	}
	
	// �׽�Ʈ ���̽� �Է� 
	for(int i = 0 ; i < testnum ; i++){
		scanf("%s", string[i]);
	}

	for(int i = 0 ; i < testnum ; i++){
		while(string[i][j] == 'O' || string[i][j] == 'X'){
			if(string[i][j] == 'O'){
				count++;
				score += count;
			}else{				// �� �κ��� ���� ���� 
				count = 0;
			}
			j++;
		}
		
		printf("%d\n", score);
		
		score = 0;
		count = 0;
		j = 0;
	}
	
	
	// �޸� ���� 
	for(int i = 0 ; i < testnum ; i++){
		free(string[i]);
	}
	free(string);
	
	return 0;
}
