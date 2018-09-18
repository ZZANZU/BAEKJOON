package dfs;

import java.util.Scanner;

public class Problem10451 {
	public static int T, N;
	public static int[] map;
	public static boolean[] visited;
	public static boolean[] check;
	public static int count;
	
	public static int start;

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		T = sc.nextInt();
		
		for(int i = 0; i < T; i++) {
			N = sc.nextInt();
			map = new int[N+1];
			visited = new boolean[N+1];
			check = new boolean[N+1];
			
			for(int j = 1; j <= N; j++) {
				map[j] = sc.nextInt();
			}
			
			count = 0;
			
			// dfs 시작
			for(int j = 1; j <= N; j++) {
				visited = new boolean[N+1];
				
				start = j;
				if(check[j] == false) dfs(j);
			}
			
			System.out.println(count);
		}
	}
	
	public static void dfs(int current) {
		// 1. 방문 체크
		visited[current] = true;
		int next = map[current];
		
		if(start == next) {
			count++;
			
			for(int i = 1; i <= N; i++) {
				if(visited[i] == true) {
					check[i] = true;
				}
			}
		}
		
		// 2. 연결된 길 체크
		// 3. 갈 수 있는 길 체크
		if(visited[next] == false && check[next] == false) {
			// 4. 간다
			dfs(next);
		}
	}
	

}
