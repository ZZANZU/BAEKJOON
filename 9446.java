package dfs;

import java.util.Scanner;

public class Problem9446 {
	public static int T;
	public static int n;
	public static int[] student;
	public static boolean[] visited;
	public static boolean[] result;
	
	public static int start;

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		T = sc.nextInt();
		
		for(int i = 0; i < T; i++) {
			n = sc.nextInt();
			
			student = new int[n+1];
			visited = new boolean[n+1];
			result = new boolean[n+1];
			
			// 학생 선택 결과 입력
			for(int j = 1; j <= n; j++) {
				student[j] = sc.nextInt();
			}
			
			for(int j = 1; j <= n; j++) {
				start = j;
				visited = new boolean[n+1];
				
				if(result[j] == false) dfs(student[j]);
			}
			
			// 팀에 속하지 못한(result[index] == false) 학생 수 구하기
			int count = 0;
			for(int j = 1; j <= n; j++) {
				if(result[j] == false) {
					count++;
				}
			}
			System.out.println(count);
		}
	}
	
	public static void dfs(int current) {
		// 1. 방문체크
		visited[current] = true;
		
		// 싸이클 발견, 해당 노드들을 result 배열에 체크
		if(current == start) {
			for(int i = 1; i <= n; i++) {
				if(visited[i] == true) {
					result[i] = true;
				}
			}
		}
		
		// 2. 연결된 길 체크
		// 3. 갈 수 있는 길 체크
		int next = student[current];
		if(visited[next] == false) {
			// 4. 간다.
			if(student[next] != next) dfs(next); // 자기 자신 싸이클 경우가 아닐때만 간
		}
		
	}

}
