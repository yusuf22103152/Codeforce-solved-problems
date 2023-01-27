//https://codeforces.com/contest/1770/problem/A
import java.util.*;
public class Koxia_and_Whiteboards {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        for(int T=0;T<t;T++) {
            int n=sc.nextInt(),m=sc.nextInt();
            int a[]=new int[n];
            long s=0;
            for(int i=0;i<n;i++) a[i]=sc.nextInt();
            for(int i=0;i<m;i++) {
                Arrays.sort(a);
                a[0]=sc.nextInt();
            }
            for(int i=0;i<n;i++) s+=a[i];
            System.out.println(s);
        }
    }
}