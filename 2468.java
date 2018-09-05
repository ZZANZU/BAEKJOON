package dfs;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class Problem2468 {
	static int N;
	static int[][] map;
	static boolean[][] visited;
	static ArrayList<Integer> result;
	
	static int[] dx = {1, -1, 0, 0};
	static int[] dy = {0, 0, 1, -1};

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int maxHeight = 0;
		int minHeight = Integer.MAX_VALUE;
		
		N = sc.nextInt();
		map = new int[N][N];
		visited = new boolean[N][N];
		result = new ArrayList<Integer>();
		
		for(int y = 0; y < N; y++) {
			for(int x = 0; x < N; x++) {
				map[y][x] = sc.nextInt();
				
				if(map[y][x] > maxHeight) {
					maxHeight = map[y][x];
				}
				
				if(map[y][x] < minHeight) {
					minHeight = map[y][x];
				}
			}
		}
		
		for(int height = minHeight; height <= maxHeight; height++) {
			int count = 0;
			visited = new boolean[N][N];
			
			// 이부분이 예외처리!!
			if(height == maxHeight) {
				result.add(1);
				break;
			}
			
			for(int y = 0; y < N; y++) {
				for(int x = 0; x < N; x++) {
					if(map[y][x] > height) { 
						if(visited[y][x] == false) {
							dfs(y,x, height);
							count++;
						}
					}
				}
			}
			
//			System.out.println(count);
			result.add(count);
		}
		
		Collections.sort(result, Collections.reverseOrder());
		
		System.out.println(result.get(0));
	}
	
	static void dfs(int y, int x, int height) {
		// 1. 방문 체크
		visited[y][x] = true;
		
		// 2. 연결된 길 체크
		for(int i = 0; i < 4; i++) {
			int targetX = x + dx[i];
			int targetY = y + dy[i];
			
			// 3. 갈 수 있는 길 체크
			if(targetX >= 0 && targetX < N && targetY >= 0 && targetY < N) {
				if(visited[targetY][targetX] == false && map[targetY][targetX] > height) {
					// 4. 간다
					dfs(targetY, targetX, height);
				}
			}
		}
	}

}
