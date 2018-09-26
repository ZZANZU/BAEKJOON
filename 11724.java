package bfs;

import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class Problem11724 {
	static int N, M;
	static boolean[][] map;
	static boolean[] visited;
	static boolean[] check;
	static Queue<Integer> queue;

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		N = sc.nextInt();
		M = sc.nextInt();
		
		map = new boolean[N+1][N+1];
		visited = new boolean[N+1];
		check = new boolean[N+1];
		queue = new LinkedList<>();
		
		for(int i = 0; i < M; i++) {
			int u = sc.nextInt();
			int v = sc.nextInt();
			
			map[u][v] = true;
			map[v][u] = true;
			check[u] = true;
			check[v] = true;
		}
		
		int count = 0;
		for(int i = 1; i <= N; i++) {
			if(check[i] == true && visited[i] == false) {
				// 0. 큐에다가 시작 지점 넣어주
				queue.add(i);
				// 0. 시작지점 방문 기록 남기
				visited[i] = true;
				
				while(queue.isEmpty() == false) {
					// 1. 큐에서 꺼내오기
					int current = queue.poll();
					
					// 2. 연결된 길들 찾기
					for(int j = 1; j <= N; j++) {
						// 3. 갈 수 있는 길 찾기
						if(map[current][j] == true && visited[j] == false) {
							// 4. 큐에 넣기(갈 수 있는 곳)
							queue.add(j);
							// 5. 방문 체크(갈 수 있는 곳)
							visited[j] = true;
						}
					}
				}
				count++;
			} else if(check[i] == false) {
				count++;
			}
		}
		
		System.out.println(count);
	}

}
