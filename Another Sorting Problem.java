//https://codeforces.com/contest/1575/problem/A
import java.util.*;
public class Another_Sorting_Problem{
    static char inverseChar(char c) {
        int x=26-(c-64)+1+64;
        char cRet=(char) x;
        return cRet;
    }
    public static void main(String[] args) {
        int n,m;
        String s,t;
        char c;
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        m=sc.nextInt();
        Vector<String> v=new Vector(n);
        Map<String,Integer> mp=new HashMap<>();
        for(int i=1;i<=n;i++) {
            s=sc.next(); 
            t="";
            for(int j=1;j<=m;j++) {
                c=s.charAt(j-1);
                if(j%2>0) t+=c;
                else t+=inverseChar(c);
            }
            mp.put(t,i);
            v.add(t);
        }
        Collections.sort(v);
        for(String x:v) System.out.print(mp.get(x)+" ");
    }
}