//https://codeforces.com/contest/148/problem/A
import java.util.*;
public class insomnia_cure{
    
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        int k=s.nextInt(),l=s.nextInt(),m=s.nextInt(),n=s.nextInt(),d=s.nextInt();
        int count=0;
        for(int i=1;i<=d;i++) {
            if(i%k==0 || i%l==0 || i%m==0 || i%n==0) count++;
        }
        System.out.println(count);
    }
}