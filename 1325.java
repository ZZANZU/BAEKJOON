package dfs;

import java.util.ArrayList;
import java.util.Scanner;

public class Problem1325 {
	static int N, M;
	static ArrayList<Integer> map[];
	static boolean[] visited;

	static int[] count;
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		N = sc.nextInt();
		M = sc.nextInt();
		
		map = new ArrayList[N+1]; // 쉬운 인덱싱을 위해 1부터 시작
		for(int i = 1; i <= N; i++) {
			map[i] = new ArrayList<Integer>();
		}
		visited = new boolean[N+1];
		count = new int[N+1]; // 각 컴퓨터가 감염시킨 수
		
		for(int i = 0; i < M; i++) {
			int A = sc.nextInt();
			int B = sc.nextInt();
			
			map[A].add(B);
		}
		
		for(int i = 1; i <= N; i++) {
			visited = new boolean[N+1];
			dfs(i);
		}
		
		// 출력
		int max = 0;
		for(int i = 1; i <= N; i++) {
			if(max < count[i]) {
				max = count[i];
			}
		}
		for(int i = 1; i <= N; i++) {
			if(count[i] == max) {
				System.out.print(i + " ");
			}
		}
	}
	
	static void dfs(int current) {
		// 1. 방문체크
		visited[current] = true;
		
		// 2. 연결된 길 체크
		for(int vv : map[current]) {
			// 3. 갈 수 있는 길 체크
			if(visited[vv] == false) {
				// 4. 간다
				dfs(vv);
				count[vv]++;
			}
		}
	}

}
