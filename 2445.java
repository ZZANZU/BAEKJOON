package io;

import java.util.Scanner;

public class Problem2445 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int N = sc.nextInt();
		
		// 1. upper
		for(int i = 1; i < N; i++) {
			for(int j = 0; j < i; j++) {
				System.out.print("*");
			}
			for(int j = 0; j < 2*N - 2*i; j++) {
				System.out.print(" ");
			}
			for(int j = 0; j < i; j++) {
				System.out.print("*");
			}
			System.out.println();
		}
		
		// 2. middle
		for(int i = 0; i < 2*N; i++) {
			System.out.print("*");
		}
		System.out.println();
		
		// 3. under
		for(int i = 1; i < N; i++) {
			for(int j = N; j > i; j--) {
				System.out.print("*");
			}
			for(int j = 2*i; j > 0; j--) {
				System.out.print(" ");
			}
			for(int j = N; j > i; j--) {
				System.out.print("*");
			}
			System.out.println();
		}
	}

}
