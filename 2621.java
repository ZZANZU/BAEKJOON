package problem;

import java.util.Arrays;
import java.util.Scanner;

public class Problem2621 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int[] color = new int[4];
		int[] num = new int[9];
		int score = 0;
		
		for(int i = 0; i < 5; i++) {
			String temp = sc.next();
			char tempColor = temp.charAt(0);
			
			// 카운팅기법
			switch(tempColor) {
			case 'R':
				color[0]++;
				break;
			case 'B':
				color[1]++;
				break;
			case 'Y':
				color[2]++;
				break;
			case 'G':
				color[3]++;
				break;
			}
			
			int tempNum= sc.nextInt();
			num[tempNum-1]++;
		}
		
//		System.out.println(Arrays.toString(color));
//		System.out.println(Arrays.toString(num));
		
		boolean isFlush = isFlush(color);
		int straight = checkStraight(num);
		int fourCard = checkFourCard(num);
		int triple = checkTriple(num);
		int pair = checkPair(num, 1);
		int max = getMax(num);
		
		if(isFlush && straight > 0) {
			score = 900 + straight;
		} else if(fourCard > 0) {
			score = 800 + fourCard;
		} else if(triple > 0 && pair > 0) {
			score = 700 + triple*10 + pair;
		} else if(isFlush) {
			score = 600 + max;
		} else if(straight > 0) {
			score = 500 + max;
		} else if(triple > 0) {
			score = 400 + triple;
		} else if(pair > 0 && checkPair(num, pair+1) > 0) {
			score = 300 + checkPair(num, pair+1)*10 + pair;
		} else if(pair > 0) {
			score = 200 + pair;
		} else {
			score = 100 + max;
		}
		
		System.out.println(score);
		
	}
	
	public static boolean isFlush(int[] color) {
		for(int i = 0; i < color.length; i++) {
			if(color[i] == 5) {
				return true;
			}
		}
		
		return false;
	}
	
	public static int checkStraight(int[] num) {
		boolean isConsecutive = false;
		int count = 0;
		int last = 0;
		
		for(int i = 0; i < num.length; i++) {
			if(num[i] == 1 && isConsecutive) {
				isConsecutive = true;
				last = i;
				count++;
			} else if(num[i] == 1) {
				isConsecutive = true;				
			} else if(num[i] != 1) {
				isConsecutive = false;
			}
		}
		
		if(count == 4) {
			return last+1;
		} else {
			return -1;
		}
	}
	
	public static int checkFourCard(int[] num) {
		for(int i = 0; i < num.length; i++) {
			if(num[i] == 4) {
				return i+1;
			}
		}
		
		return -1;
	}
	
	public static int checkTriple(int[] num) {
		for(int i = 0; i < num.length; i++) {
			if(num[i] == 3) {
				return i+1;
			}
		}
		
		return -1;
	}
	
	public static int checkPair(int[] num, int start) {
		for(int i = start-1; i < num.length; i++) {
			if(num[i] == 2) {
				return i+1;
			}
		}
		
		return -1;
	}
	
	public static int getMax(int[] num) {
		int maxNum = 0;

		for (int i = 0; i < num.length; i++) {
			if (num[i] != 0) {
				maxNum = i+1;
			}
		}

		return maxNum;
	}

}
