package io;

import java.util.Scanner;

public class Problem2442 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int N = sc.nextInt();
		int count = 0;
		
		for(int i = N-1; i > 0; i--) {
			count++;
			for(int j = 0; j < i; j++) {
				System.out.print(" ");
			}
			for(int k = 0; k < 2*count-1; k++) {
				System.out.print("*");
			}
			System.out.println();
		}
	}

}
