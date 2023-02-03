//https://codeforces.com/contest/1671/problem/B
import java.util.*;
public class Consecutive_Points_Segment {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        for(int t=sc.nextInt();t>0;t--) {
            boolean con_segment=true;
            int n=sc.nextInt(),i;
            int a[]=new int[n];
            for(i=0;i<n;i++) a[i]=sc.nextInt();
            for(a[n-1]--,i=n-2;i>=0;i--) {
                switch(a[i+1]-a[i]) {
                    case 0:
                        a[i]--;
                        break;
                    case 1:
                        continue;
                    case 2:
                        a[i]++;
                        break;
                    default:
                        con_segment=false;
                }
                if(!con_segment) break;
            }
            if(con_segment) System.out.println("YES");
            else System.out.println("NO");
        }
    }
}