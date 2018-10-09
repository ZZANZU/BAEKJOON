package dfs;

import java.util.Arrays;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

/*
 * 오랜만에 풀어서 그런가... 감이 많이 죽었
 * DFS로 풀어보려고 했지만 count를 증가시키는 순서와 방법에 있어
 * 적합한 방식이 DFS보다는 BFS였다.
 * */

public class Problem1389 {
	static boolean[] visited;
	static int[][] map;
	static int result = 0;
	static int N, M;
	static Queue<Node1389> queue;
	
	static int min = Integer.MAX_VALUE;

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		N = sc.nextInt();
		M = sc.nextInt();
		
		map = new int[N+1][N+1];
		queue = new LinkedList<>();
		
		for(int i = 0; i < M; i++) {
			int A = sc.nextInt();
			int B = sc.nextInt();
			
			map[A][B] = 1;
			map[B][A] = 1;
		}
		
		for(int i = 1; i <= N; i++) {
			int kevin = 0;
			visited = new boolean[N+1];
			
			Node1389 start = new Node1389(i, 0);
			visited[i] = true;
			queue.add(start);
			
			while(queue.isEmpty() == false) {
				Node1389 current = queue.poll();
				int node = current.currentPos;
				int count = current.count;
				
				for(int j = 1; j <= N; j++) {
					if(visited[j] == false && map[node][j] == 1) {
						Node1389 next = new Node1389(j, count+1);
						queue.add(next);
						visited[j] = true;
						kevin += count+1;
					}
				}
			}
			
			if(kevin < min) {
				min = kevin;
				result = i;
			}
		}
		
		System.out.println(result);
	}

}

class Node1389 {
	int currentPos;
	int count;
	
	public Node1389(int currentPos, int count) {
		this.currentPos = currentPos;
		this.count = count;
	}
}
