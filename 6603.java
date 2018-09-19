package bfs;

import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class Problem6603 {
	static int[] map;
	static boolean[] visited;
	static Queue<Position> queue;
	static int k;

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		boolean isEnd = false;
		while(isEnd == false) {
			k = sc.nextInt();
			
			if(k != 0) {
				map = new int[k];
				visited = new boolean[k];
				queue = new LinkedList<>();
				
				for(int i = 0; i < k; i++) {
					map[i] = sc.nextInt(); 
				}
				
				for(int i = 0; i <= k-6; i++) {
					Position start = new Position(i, 1);
					queue.add(start);
				}
				visited[0] = true; // 하드코딩...후...
				
				while(queue.isEmpty() == false) {
					Position pos = queue.poll();
					visited[pos.current] = true;
					
					if(pos.count > 6) {
						// 출력?
					}
					
					for(int i = pos.current; i < k; i++) {
						if(visited[i] == false) {
							Position next = new Position(i, pos.count + 1);
							queue.add(next);
						}
					}
				}
				
			} else {
				isEnd = true;
			}			
		}
	}

}

class Position {
	int current;
	int count;
	
	public Position(int current, int count) {
		this.current = count;
		this.count = count;
	}
}
