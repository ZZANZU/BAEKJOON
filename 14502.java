package bfs;

import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class Problem14502 {
	static int M, N;
	static int[][] map;
	static int[][] backup;
	static boolean[][] visitedDfs;
	static boolean[][] visitedBfs;
	static Queue<Position14502> queue;
	static int[][] tmp;
	
	static int[] dx = {1, -1, 0, 0};
	static int[] dy = {0, 0, 1, -1};
	static int max = Integer.MIN_VALUE;

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		N = sc.nextInt();
		M = sc.nextInt();
		
		map = new int[N][M];
		backup = new int[N][M];
		visitedDfs = new boolean[N][M];
		visitedBfs = new boolean[N][M];
		tmp = new int[N][M];
		
		queue = new LinkedList<>();
		
		for(int y = 0; y < N; y++) {
			for(int x = 0; x < M; x++) {
				map[y][x] = sc.nextInt();
				backup[y][x] = map[y][x];
			}
		}
		
		for(int y = 0; y < N; y++) {
			for(int x = 0; x < M; x++) {
				if(map[y][x] == 0) {
					copyMap(backup, map); // 맵 초기화
					
					dfs(y, x, 1); // 벽 세우기 시작
				}
			}
		}
		
		System.out.println(max);
	}
	
	static void dfs(int y, int x, int count) {
		// 1. 방문체크
		visitedDfs[y][x] = true;
		map[y][x] = 1; // 벽 세우기
		
		if(count == 3) { // 벽이 3개 세워졌다면,
			visitedBfs = new boolean[N][M]; // 초기화, 이 부분을 빼먹었었음
			copyMap(map, tmp);
			bfs(tmp); // 세균 퍼지는 로직 시작, BFS
			
			visitedDfs[y][x] = false;
			map[y][x] = 0;
			return;
		}
		
		// 2. 연결된 길 체크, 상하좌우가 아니구나!!!
		for(int i = 0; i < N; i++) {
			for(int j = 0; j < M; j++) {
				// 3. 갈 수 있는 길 체크
				if(map[i][j] == 0 && visitedDfs[i][j] == false) {
					// 4. 간다
					dfs(i, j, count+1);
				}
			}
		}
		
		// 백트래킹
		visitedDfs[y][x] = false;
		map[y][x] = 0;
	}
	
	static void bfs(int[][] inputMap) {
		int count = 0; // 안전구역 칸 수 
		
		// 1. 시작지점 큐에 집어넣기
		for(int y = 0; y < N; y++) {
			for(int x = 0; x < M; x++) {
				if(inputMap[y][x] == 2 && visitedBfs[y][x] == false) {
					Position14502 start = new Position14502(y, x);
					
					visitedBfs[y][x] = true;
					queue.add(start);
				}
			}
		}
		
		while(queue.isEmpty() == false) {
			// 2. 큐에서 꺼내오기
			Position14502 current = queue.poll();
			
			int currentY = current.y;
			int currentX = current.x;
			
			// 3. 연결된 길 찾기
			for(int i = 0; i < 4; i++) {
				int targetY = currentY + dy[i];
				int targetX = currentX + dx[i];
				
				if(targetY >= 0 && targetY < N && targetX >= 0 && targetX < M) {
					if(inputMap[targetY][targetX] == 0) {
						Position14502 next = new Position14502(targetY, targetX);
						
						inputMap[targetY][targetX] = 2;
						visitedBfs[targetY][targetX] = true;
						queue.add(next); // 4. 큐에 넣기
					}
				}
			}
		}
		
		// 세균 감염 종료, 안전구역 칸 수 체크
		for(int y = 0; y < N; y++) {
			for(int x = 0; x < M; x++) {
				if(inputMap[y][x] == 0) {
					count++;
				}
			}
		}
		
		if(count > max) {
			max = count;
		}
	}
	
	// 2차원 배열 복사
	static void copyMap(int[][] arr, int[][]copy) {
		for(int i = 0; i < arr.length; i++) {
			System.arraycopy(arr[i], 0, copy[i], 0, arr[i].length);
		}
	}

}

class Position14502 {
	int y;
	int x;
	
	public Position14502(int y, int x) {
		this.y = y;
		this.x = x;
	}
}
