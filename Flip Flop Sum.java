//https://codeforces.com/contest/1778/problem/A
import java.util.*;
public class Make_Array_Good {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        for(int t=sc.nextInt();t>0;t--) {
            int n=sc.nextInt();
            int a[]=new int[n];
            for(int i=0;i<n;i++) a[i]=sc.nextInt();
            boolean flipped=false;
            for(int i=0;i<n-1;i++) {
                if(a[i]==-1 && a[i+1]==-1) {
                    a[i]=1;
                    a[i+1]=1;
                    flipped=true;
                    break;
                }
            }
            if(!flipped) {
                for(int i=0;i<n-1;i++) {
                    if((a[i]==-1 && a[i+1]==1) || (a[i]==1 && a[i+1]==-1)) {
                        flipped=true;
                        break;
                    }
                }
            }
            if(flipped) {
                int sum=0;
                for(int i=0;i<n;i++) sum+=a[i];
                System.out.println(sum);
            }
            else System.out.println(n-4);
        }
    }
}