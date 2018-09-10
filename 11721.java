package io;

import java.util.Scanner;

public class Problem11721 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		String input = sc.nextLine();
		
		for(int i = 1; i <= input.length(); i++) {
			if((i%10) != 0){
				System.out.print(input.charAt(i-1));
			}
			
			if((i%10) == 0) {
				System.out.print(input.charAt(i-1));
				System.out.println();
			}
		}
	}

}
