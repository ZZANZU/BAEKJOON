package io;

import java.util.Scanner;

public class Problem10992 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int N = sc.nextInt();
		
		// 윗부분, ㅅ 모양
		for(int i = 1; i < N; i++) {
			for(int j = N-i; j > 0; j--) {
				System.out.print(" ");
			}
			System.out.print("*");
			
			if(i > 1) {
				for(int j = 0; j < 2*i-3; j++) {
					System.out.print(" ");
				}
				System.out.println("*");
			} else {
				System.out.println();
			}
		}
		
		// 바닥
		for(int i = 0; i < 2*N-1; i++) {
			System.out.print("*");
		}
	}

}
