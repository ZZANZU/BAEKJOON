package dfs;

import java.util.Collections;
import java.util.LinkedList;
import java.util.Scanner;

public class Problem2667 {
	static int N;
	static char[][] map;
	static boolean[][] visited;
	
	static int[] dx = {1, -1, 0, 0};
	static int[] dy = {0, 0, 1, -1};
	static int count;
	static LinkedList<Integer> result;

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int numOfHouse = 0;
		
		N = sc.nextInt();
		map = new char[N][N];
		visited = new boolean[N][N];
		result = new LinkedList<Integer>();
		
		// 입력
		for(int i = 0; i < N; i++) {
			String temp = sc.next();
			for(int j = 0; j < N; j++) {
				map[i][j] = temp.charAt(j);
			}
		}
		
		// 탐색
		for(int i = 0; i < N; i++) {
			for(int j = 0; j < N; j++) {
				if(map[i][j] == '1' && visited[i][j] == false) {
					count = 1; // 집의 수 초기화
			
					dfs(i, j);
					
					result.add(count);
					numOfHouse++;
				}
			}
		}
		
		Collections.sort(result);
		
		// 답 출력
		System.out.println(numOfHouse);
		while(!result.isEmpty()) {
			System.out.println(result.removeFirst());
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
			if(targetX >= 0 && targetX < N && targetY >= 0 && targetY < N) {
				if(visited[targetY][targetX] == false && map[targetY][targetX] == '1') {
					// 4. 간다
					dfs(targetY, targetX);
					count++; // 집의 수
				}
			}
		}
	}

}
