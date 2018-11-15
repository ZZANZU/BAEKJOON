package general;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Problem2346 {
	public static int N;
	public static int[] balloon;
	
	static Balloon getList(int num, int val) {
		Balloon balloon = new Balloon(num, val);
		return balloon;
	}

	public static void main(String[] args) {
		List<Balloon> list = new ArrayList<>();
		
		Scanner sc = new Scanner(System.in);

		N = sc.nextInt();
		balloon = new int[N+1];
		
		int numOfBalloon = N;
		
		for(int i = 1; i <= N; i++) {
			Balloon balloon = new Balloon(i, sc.nextInt());
			list.add(balloon);
		}
		
		f(list);
	}
	
	public static void f(List<Balloon> list) {
		int kill = 0;
		int val = 0;
		
		while(N > 0) {
			if(val > 0) {
				for(int i = 0; i < val-1; i++) {
					++kill;
					if(kill >= list.size()) {
						kill = 0;
					}
				}
			} else if(val < 0) {
				val *= -1;
				for(int i = 0; i < val; i++) {
					--kill;
					if(kill < 0) {
						kill = list.size()-1;
					}
				}
			}
			
			Balloon li = list.get(kill);
			val = li.val;
			
			System.out.print(li.num + " ");
			
			list.remove(kill);
			if(kill == list.size()) {
				kill = 0;
			}
			
			N--;
		}
	}
}

class Balloon {
	int num;
	int val;
	
	public Balloon(int num, int val) {
		this.num = num;
		this.val = val;
	}

	@Override
	public String toString() {
		return "Balloon [num=" + num + ", val=" + val + "]";
	}
}