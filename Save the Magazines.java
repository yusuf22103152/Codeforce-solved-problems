//https://codeforces.com/contest/1743/problem/C
import java.util.*;
public class Save_the_Magazines {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        for(int a=0;a<t;a++) {
            int n=sc.nextInt();
            int ar[]=new int[n];
            int sum=0;
            String s=sc.next();
            for(int b=0;b<n;b++) ar[b]=sc.nextInt();
            for(int c=n-1;c>=0;c--) {
                if(s.charAt(c)=='1') {
                    int min=ar[c];
                    sum+=ar[c];
                    for(c--;c>=0;c--) {
                        sum+=ar[c];
                        if(ar[c]<min) min=ar[c];
                        if(s.charAt(c)=='0') break;
                    }
                    if(c>=0 && s.charAt(c)=='0') sum-=min;
                }
            }
            System.out.println(sum);
        }
    }
}