package io;

import java.util.Scanner;

public class Problem10953 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int T = sc.nextInt();
		
		for(int i = 0; i < T; i++) {
			String temp = sc.next(); // nextLine이 아니군
			String[] num = temp.split(",");
			
			int A = Integer.parseInt(num[0]); // String을 int로!
			int B = Integer.parseInt(num[1]);
			
			System.out.println(A+B);
		}
	}

}
