package bfs;

import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class Problem11403 {
	static int N;
	static int[][] map;
	static int[][] result;
	static boolean[] visited;
	static Queue<Integer> queue;
	static boolean[] isExist;

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		N = sc.nextInt();
		map = new int[N+1][N+1];
		result = new int[N][N];
		visited = new boolean[N+1];
		queue = new LinkedList<>();
		isExist = new boolean[N+1];
		
		for(int y = 1; y <= N; y++) {
			
			for(int x = 1; x <= N; x++) {
				map[y][x] = sc.nextInt();
				
				if(map[y][x] == 1) isExist[y] = true;
			}
		}
		
		for(int y = 1; y <= N; y++) {
			visited = new boolean[N+1];
			
			if(isExist[y] == true) {
				queue.add(y);
//				visited[y] = true; // 방문체크하는 타이밍이 관건이군
				
				while(queue.isEmpty() == false) {
					int current = queue.poll();
					
					for(int i = 1; i <= N; i++) {
						if(map[current][i] == 1 && visited[i] == false) {
							queue.add(i);
							visited[i] = true;
							result[y-1][i-1] = 1;
						}
					}
				}
			}
		}
		
		for(int i = 0; i < N; i++) {
			for(int j = 0; j < N; j++) {
				System.out.print(result[i][j] + " ");
			}
			System.out.println();
		}
		
		
	}

}
