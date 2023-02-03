//https://codeforces.com/contest/1704/problem/C
import java.util.*;
public class Virus {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        for(int t=sc.nextInt();t>0;t--) {
            int n=sc.nextInt(),m=sc.nextInt(),a[]=new int[m],sum=0,minus=0;
            for(int i=0;i<m;i++) a[i]=sc.nextInt();
            Arrays.sort(a);
            Vector<Integer> v=new Vector();
            v.add(n-a[m-1]+a[0]-1);
            for(int i=1;i<m;i++) v.add(a[i]-a[i-1]-1);
            Collections.sort(v,Collections.reverseOrder());
            for(int i=0;i<m;i++) {
                v.set(i,v.get(i)-minus);
                if(v.get(i)<1) break;
                sum+=v.get(i)-1;
                if(v.get(i)==1) sum++;
                minus+=4;
            }
            System.out.println(n-sum);
        }
    }
}