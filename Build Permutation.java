//https://codeforces.com/contest/1713/problem/C
import java.util.*;
public class Build_Permutation {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        for(int t=sc.nextInt();t>0;t--) {
            int n=sc.nextInt();
            Vector<Integer> v=new Vector();
            for(int i=n-1;i>=0;) {
                int x=(int) Math.pow(Math.ceil(Math.sqrt(i)),2)-i,iTem=i;
                for(;x<=iTem && i>=0;i--,x++) v.add(x);
            }
            for(int i=n-1;i>=0;i--) System.out.print(v.get(i)+" ");
            System.out.println();
        }
    }
}