package bfs;

import java.util.Scanner;

public class Problem6603 {
	static int k;
	static int[] map;
//	static boolean[] visited; 순서가 오름차순으로 되는 특징이어서 방문체크 필요없음!
	static int count;
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		boolean isEnd = false;
		
		while(isEnd == false) {
			k = sc.nextInt();
			map = new int[k];
			
			if(k != 0) {
				// 입력
				for(int i = 0; i < k; i++) {
					map[i] = sc.nextInt();
				}
				
				// dfs
				for(int i = 0; i <= k-6; i++) {
					count = 1; // 카운트 초기
					dfs(i, map[i] + " ");
				}
				
				System.out.println();
			}  else {
				isEnd = true;
			}
		}
	}
	
	public static void dfs(int current, String output) {
		if(count == 6) {
			output += "\n";
			System.out.print(output);
		} else {
			for(int i = current+1; i < k; i++) {
				++count;
				dfs(i, output + map[i] + " ");
			}
		}
		
		--count; // 백트래킹
	}

}