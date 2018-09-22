package dfs;

import java.util.Arrays;
import java.util.Scanner;

public class Problem2178 {
	static int N, M;
	static char[][] map;
	static boolean[][] visited;
	
	static int[] dx = {1, -1, 0 ,0};
	static int[] dy = {0, 0, 1, -1};
	static int min = Integer.MAX_VALUE;
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		N = sc.nextInt();
		M = sc.nextInt();
		map = new char[N][M];
		visited = new boolean[N][M];
		String temp = sc.nextLine();
		
		for(int y = 0; y < N; y++) {
			String tempStr = sc.nextLine();
			map[y] = tempStr.toCharArray();
		}
		
//		for(int y = 0; y < N; y++) {
//			System.out.println(Arrays.toString(map[y]));
//		}
		
		dfs(0, 0, 1);
		System.out.println(min);
	}
	
	public static void dfs(int y, int x, int count) {
		// 1. 방문체크
		visited[y][x] = true;
		
		if(y == N-1 && x == M-1) {
			if(min > count) {
				min = count;
			}
		}
		
		// 2. 연결된 길 체크
		for(int i = 0; i < 4; i++) {
			int targetX = x + dx[i];
			int targetY = y + dy[i];
			
			// 3. 갈 수 있는 길 체크
			if(targetX >= 0 && targetX < M && targetY >= 0 && targetY < N) {
				if(map[targetY][targetX] == '1' && visited[targetY][targetX] == false) {
					// 4. 간다
					dfs(targetY, targetX, count+1);
				}
			}
		}
		visited[y][x] = false;
	}

}
