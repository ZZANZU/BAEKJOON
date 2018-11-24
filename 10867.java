package general;

import java.util.Arrays;
import java.util.Scanner;

public class Problem10867 {
	static int N;
	static int[] map;
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		N = sc.nextInt();
		map = new int[N];
		
		for(int i = 0; i < N; i++) {
			map[i] = sc.nextInt();
		}
		
		Arrays.sort(map);
		
		System.out.print(map[0]);
		System.out.print(" ");
		for(int i = 1; i < N; i++) {
			if(map[i-1] != map[i]) {
				System.out.print(map[i]);
				System.out.print(" ");
			}
		}
	}

}
