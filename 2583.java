package dfs;

import java.util.LinkedList;
import java.util.Scanner;

public class Problem2583 {
	static int M, N, K;
	static int[][] map;
	static boolean[][] visited;
	
	static int[] dx = {1, -1, 0, 0};
	static int[] dy = {0, 0, 1, -1};
	static int count = 0; // 넓이
	static int area = 1;
	
	static LinkedList<Integer> result;
	
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		M = sc.nextInt(); // row
		N = sc.nextInt(); // col
		K = sc.nextInt(); // num of rectangle
		
		map = new int[M][N];
		visited = new boolean[M][N];
		
		result = new LinkedList<Integer>();
		
		for(int i = 0; i < K; i++) {
			int startX = sc.nextInt();
			int startY = sc.nextInt();
			int endX = sc.nextInt();
			int endY = sc.nextInt();
			
			for(int y = startY; y < endY; y++) {
				for(int x = startX; x < endX; x++) {
					map[y][x] = 1;
				}
			}
		}
		
		for(int i = 0; i < M; i++) {
			for(int j = 0; j < N; j++) {
				if(visited[i][j] == false && map[i][j] == 0) {
					area = 1;
					
					dfs(i, j);
					
					count++;
					
					result.add(area);
				}
			}
		}
		System.out.println(count);

		java.util.Collections.sort(result);
		for(int i : result) {
			System.out.print(i + " ");
		}
	}
	
	static void dfs(int y, int x) {
		// 1. 방문체크
		visited[y][x] = true;
		
		// 2. 연결된 길 체크
		for(int i = 0; i < 4; i++) {
			int targetX = x + dx[i];
			int targetY = y + dy[i];
			
			// 3. 갈 수 있는 길 체크
			if(targetX >= 0 && targetX < N && targetY >= 0 && targetY < M) {
				if(map[targetY][targetX] == 0 && visited[targetY][targetX] == false) {
					// 4. 간다
					area++;

					dfs(targetY, targetX);
				}
			}
		}
	}
}
