package problem;

import java.util.Scanner;

public class Problem1012 {
	static int T, M, N, K;
	static boolean[][] map;
	static boolean[][] visited;
	
	static int[] dx = {-1, 1, 0, 0};
	static int[] dy = {0, 0, -1, 1};
	
	static int count = 0;
	static int[] result;
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		T = sc.nextInt();
		result = new int[T];
		
		for(int i = 0; i < T; i++) {
			M = sc.nextInt();
			N = sc.nextInt();
			K = sc.nextInt();
			
			map = new boolean[N][M];
			visited = new boolean[N][M];
			
			for(int j = 0; j < K; j++) {
				int x = sc.nextInt();
				int y = sc.nextInt();
				
				map[y][x] = true;
			}
			
			for(int y = 0; y < N; y++) {
				for(int x = 0; x < M; x++) {
					if(visited[y][x] == false && map[y][x] == true) {
						dfs(x, y);
						count++;
					}
				}
			}
			System.out.println(count);
			count = 0;
		}
		
	}
	
	public static void dfs(int x, int y) {
		// 1. 방문 기로을 남긴다.
		visited[y][x] = true;
		
		// 2. 연결된 길을 찾는다.(상하좌우, 4가지) dx, dy를 사용하는 것에 집중!
		for (int i = 0; i < 4; i++) {
			int targetX = x + dx[i];
			int targetY = y + dy[i];

			if (targetX >= 0 && targetX < M && targetY >= 0 && targetY < N) {
				// 3. 갈 수 있는 길을 찾는다.
				if (map[targetY][targetX] == true) {
					if (visited[targetY][targetX] == false){
						// 4. 간다
						dfs(targetX, targetY);
					}
				}
			}
		}

	}

}
