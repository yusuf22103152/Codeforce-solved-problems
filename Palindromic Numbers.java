//https://codeforces.com/contest/1700/problem/B
import java.util.*;

public class Palindromic_Numbers{
    static int getInverse(char c,int k) {
        return k-Character.getNumericValue(c);
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt(),n,k,x;
        boolean doubleMode;
        String s;
        for(int h=0;h<t;h++) {
            n=sc.nextInt();
            s=sc.next();
            k=9;
            if(s.charAt(0)=='9') k++;
            int rem=0;
            int pile[]=new int[n];
            for(int i=n-1;i>=0;i--) {
                x=getInverse(s.charAt(i),k);
                pile[i]=rem+x;
                if(rem==1) rem=0;
                if(pile[i]>=10) {
                    pile[i]-=10;
                    rem=1;
                }
            }
            if(s.charAt(0)=='9') pile[n-1]++;
            if(pile[n-1]==10) {
                pile[n-1]=0;
                for(int i=n-2;i>=0;i--) {
                    pile[i]++;
                    if(pile[i]==10) {
                        pile[i]=0;
                    }
                    else break; 
                }
            }
            for(int z:pile) System.out.print(z);
            System.out.print('\n');
        }
    }
}