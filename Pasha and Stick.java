//https://codeforces.com/contest/610/problem/A
import java.util.*;
public class Main {
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt(),r;
		if(n%2==1||n<6) r=0;
		else r=(n-2)/4;
		System.out.println(r);
	}
}