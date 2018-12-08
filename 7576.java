package bfs;

import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class Problem7576 {
	static int M, N;
	static int[][] map;
	static int[][] visited;
	static Queue<Position> queue;
	
	static int[] dy = {0, 0 , 1, -1};
	static int[] dx = {1, -1, 0, 0};
	static int max = Integer.MIN_VALUE;

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		M = sc.nextInt();
		N = sc.nextInt();
		
		map = new int[N][M];
		visited = new int[N][M];
		queue = new LinkedList<Position>();
		
		for(int y = 0; y < N; y++) {
			for(int x = 0; x < M; x++) {
				map[y][x] = sc.nextInt();
				
				if(map[y][x] == 1) {
					Position pos = new Position(x, y, 0);
					visited[y][x] = 0;
					queue.add(pos);
				}
			}
		}
		
		while(queue.isEmpty() == false) {
			Position currentPos = queue.poll();
			
			int currentX = currentPos.x;
			int currentY = currentPos.y;
			int currentDay = currentPos.day;
			
			if(currentDay > max) {
				max = currentDay;
			}
			
			for(int i = 0; i < 4; i++) {
				int targetX = currentX + dx[i];
				int targetY = currentY + dy[i];
				
				if(targetX >= 0 && targetX < M && targetY >= 0 && targetY < N) {
					if(map[targetY][targetX] == 0 && map[targetY][targetX] != -1 
							&& visited[targetY][targetX] == 0) {
						Position nextPos = new Position(targetX, targetY, currentDay+1);
						visited[targetY][targetX] = currentDay+1;
						
						queue.add(nextPos);
					}
				}
			}
		}
		
		for(int y = 0; y < N; y++) {
			for(int x = 0; x < M; x++) {
				if(map[y][x] == 0 && visited[y][x] == 0) {
					System.out.println(-1);
					return;
				}
			}
		}
		
		System.out.println(max);
	}

}

class Position {
	int x, y;
	int day;
	
	public Position(int x, int y, int day) {
		this.x = x;
		this.y = y;
		this.day = day;
	}
}
