//https://codeforces.com/contest/155/problem/A
import java.util.*;
public class I_love_username{
    
    public static void main(String[] args) {
        Scanner inp=new Scanner(System.in);
        int count=0;
        int n=inp.nextInt();
        if(n==1) System.out.println(0);
        else {
            int h=inp.nextInt();
            int l=h;
            for(int i=1;i<n;i++) {
                int t=inp.nextInt();
                if(t>h) {
                    count++;
                    h=t;
                }
                else if(t<l) {
                    count++;
                    l=t;
                }
            }
            System.out.println(count);
        }
    }
    
}