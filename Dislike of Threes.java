//https://codeforces.com/contest/1560/problem/A
import java.util.*;
public class DislikeOfThrees{
    
    public static void main(String[] args) {
        
        Scanner input=new Scanner(System.in);
        int n=input.nextInt();
        for(int i=0;i<n;i++) {
            int k=input.nextInt();
            int c=0,res=0;
            for(int j=1;c!=k;j++) {
                if(j%3!=0 && j%10!=3) {
                    c++;
                }
                if(c==k) res=j;
            }
            System.out.println(res);
        }
    }
}
