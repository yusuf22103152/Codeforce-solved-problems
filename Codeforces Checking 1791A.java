import java.util.*;
public class Main {
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		for(int t=sc.nextInt();t>0;t--) {
			String c=sc.next();
			if("codefrs".contains(c)) {
				System.out.println("YES\n");
			}
			else System.out.println("NO\n");
		}
	}
}