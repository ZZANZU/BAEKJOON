package io;

/*
 * 자바에는 제곱함수 Math.pow()가 있군
 */

import java.util.Scanner;

public class Problem11720 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int T = sc.nextInt();
		String temp = sc.next();
		
		int sum = 0;
		
		for(int i = 0; i < T; i++) {
			sum += temp.charAt(i) - '0';
		}
		
		System.out.println(sum);
	}

}
