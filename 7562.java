package dfs;

import java.util.Scanner;

public class Problem7562 {
	private static int T, I;
	private static boolean[][] map;
	private static boolean[][] visited;
	private static int endY, endX;
	private static int min = Integer.MAX_VALUE;
	
	private static int[] dx = {1, 2, 2, 1, -1, -2, -2, -1};
	private static int[] dy = {2, 1, -1, -2, -2, -2, 1, 2};

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		T = sc.nextInt();
		
		for(int i = 0; i < T; i++) {
			I = sc.nextInt();
			
			map = new boolean[I][I];
			visited = new boolean[I][I];
			
			int startY = sc.nextInt();
			int	startX = sc.nextInt();
			
			endY = sc.nextInt();
			endX = sc.nextInt();
			
			Position7562 start = new Position7562(startY, startX, 0);
			dfs(start);
			
			// 최소 count 출력
			System.out.println(min);
		}
	}
	
	// 너무 뺑뺑 돌기만 할 것 같은데...?
	public static void dfs(Position7562 current) {
		int y = current.y;
		int x = current.x;
		int count = current.count;
		
		// 1. 방문 체크
		visited[y][x] = true;
		
		if(y == endY && x == endX) {
			if(min > count) min = count;
			return;
		}
		
		// 2. 연결된 길 체크
		for(int i = 0; i < 8; i++) {
			int targetY = y + dy[i];
			int targetX = x + dx[i];
			
			// 3. 갈 수 있는 길 체크
			if(targetX >= 0 && targetX < I && targetY >= 0 && targetY < I) {
				if(visited[targetY][targetX] == false) {
					// 4. 간다
					Position7562 next = new Position7562(targetY, targetX, count+1);
					dfs(next);
				}
			}
		}
	}
}

class Position7562 {
	int x, y, count;
	
	public Position7562(int y, int x, int count) {
		this.y = y;
		this.x = x;
		this.count = count;
	}
}
