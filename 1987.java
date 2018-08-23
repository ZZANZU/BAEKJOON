package problem;

import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

public class Problem1987 {
	static Set<Integer> set;
	static int R, C;
	static int[][] map;
	
	static int[] dx = {0, 0, 1, -1};
	static int[] dy = {1, -1, 0, 0};
	static int max = Integer.MIN_VALUE;
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		set = new HashSet<>();
		
		R = sc.nextInt();
		C = sc.nextInt();
		
		map = new int[R][C];
		
		for(int i = 0; i < R; i++) {
			String temp = sc.next();
			
			for(int j = 0 ; j < C; j++) {
				map[i][j] = temp.charAt(j);
			}
		}
		
		set.add(map[0][0]);
		dfs(0, 0, 1);
		
		System.out.println(max);
		
	}
	
	static void dfs(int x, int y, int count) {
		// 0. 종료 체크
		if(count > max) {
			max = count;
		}
		
		// 1. 방문 체크
		set.add(map[y][x]);
		// 2. 연결된 길 체크
		for(int i = 0; i < 4; i++) {
			int targetX = x + dx[i];
			int targetY = y + dy[i];
			
			// 3. 갈 수 있는 길 체크
			if(targetX >= 0 && targetX < C && targetY >= 0 && targetY < R) {
				if(!set.contains(map[targetY][targetX])) {
					// 4. 간다
					dfs(targetX, targetY, count+1);
				}
			}
		}
		// 5. 방문 체크 해제
		set.remove(map[y][x]);
	}

}
