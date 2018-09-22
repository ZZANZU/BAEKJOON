package dfs;

import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class Problem1697 {
	static int N, K;
	static int[] map;
	static boolean[] visited;
	static Queue<Position1697> queue;
	
	static int min = Integer.MAX_VALUE;
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		map = new int[100001];
		visited = new boolean[100001];
		queue = new LinkedList<>();
		
		N = sc.nextInt();
		K = sc.nextInt();
		
		visited[N] = true;
		Position1697 start = new Position1697(N, 0);
		queue.add(start);
		
		while(queue.isEmpty() == false) {
			Position1697 now = queue.poll();
			
			if(now.position == K) {
				if(min > now.time) {
					min = now.time;
				}
			}
			
			for(int i = 0; i < 3; i++) {
				if(i == 0) {
					int nextPos = now.position+1;
					if(nextPos >= 0 && nextPos < 100001 && visited[nextPos] == false) {
						Position1697 next = new Position1697(nextPos, now.time+1);
						queue.add(next);
						visited[nextPos] = true;
					}
				} else if(i == 1) {
					int nextPos = now.position-1;
					if(nextPos >= 0 && nextPos < 100001 && visited[nextPos] == false) {
						Position1697 next = new Position1697(nextPos, now.time+1);
						queue.add(next);
						visited[nextPos] = true;
					}
				} else {
					int nextPos = 2*now.position;
					if(nextPos >= 0 && nextPos < 100001 && visited[nextPos] == false) {
						Position1697 next = new Position1697(nextPos, now.time+1);
						queue.add(next);
						visited[nextPos] = true;
					}
				}
			}
		}
		System.out.println(min);
	}
}

class Position1697 {
	int position;
	int time;
	
	public Position1697(int position, int time) {
		this.position = position;
		this.time = time;
	}
}
