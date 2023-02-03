#https://codeforces.com/contest/1766/problem/B
import java.util.*;
public class Notepad_Sharp {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        for(int t=sc.nextInt();t>0;t--) {
            int n=sc.nextInt(),c=0;
            String s=sc.next();
            boolean dejavu=false;
            Map<String,Boolean> m=new HashMap<>();
            for(int i=1;i<n;i++) {
                String sT="";
                sT+=s.charAt(i-1);
                sT+=s.charAt(i);
                if(s.charAt(i)==s.charAt(i-1)) c++;
                else c=0;
                if(m.getOrDefault(sT,false) && c!=2){
                    dejavu=true;
                    break;
                } 
                m.put(sT,true);
            }
            if(dejavu) System.out.println("YES");
            else System.out.println("NO");
        }
    }
}