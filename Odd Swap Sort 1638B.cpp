import java.util.*;
public class Odd_Swap_Sort {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        for(int t=sc.nextInt();t>0;t--) {
            int even=0,odd=0;
            boolean sortable=true;
            for(int n=sc.nextInt(),x;n>0;n--) {
                x=sc.nextInt();
                if(x%2==1) {
                    if(odd==0) odd=x;
                    else {
                        if(x<odd) sortable=false;
                        else odd=x;
                    }
                }
                else {
                    if(even==0) even=x;
                    else {
                        if(x<even) sortable=false;
                        else even=x;
                    }
                }
            }
            if(sortable) System.out.println("YES");
            else System.out.println("NO");
        }
    }
}