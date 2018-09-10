package io;

import java.util.Scanner;

public class Problem1924 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int x = sc.nextInt();
		int y = sc.nextInt();
		
		int total = 0;
		
		if(x == 1) {
			total = y - 1;
		} else if(x == 2) {
			total = 31 + y;
		}
	}

}
