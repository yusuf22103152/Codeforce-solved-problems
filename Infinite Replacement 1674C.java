import java.io.*;
import java.util.*;
public class Main {
    static class FastReader {
        BufferedReader br;
        StringTokenizer st;
        public FastReader()
        {
            br=new BufferedReader(new InputStreamReader(System.in));
        }
        String next()
        {
            while (st == null || !st.hasMoreElements()) {
                try {
                    st = new StringTokenizer(br.readLine());
                }
                catch (IOException e) {
                    e.printStackTrace();
                }
            }
            return st.nextToken();
        }
        int nextInt() { return Integer.parseInt(next()); }
        long nextLong() { return Long.parseLong(next()); }
        double nextDouble(){return Double.parseDouble(next());}
        String nextLine()
        {
            String str = "";
            try {
                if(st.hasMoreTokens()){
                    str = st.nextToken("\n");
                }
                else{
                    str = br.readLine();
                }
            }
            catch (IOException e) {
                e.printStackTrace();
            }
            return str;
        }
    }
    
	public static void main(String[] args) {
		FastReader sc = new FastReader();
		for(int q=sc.nextInt();q>0;q--) {
			long c;
			String s=sc.next(),t=sc.next();
			if(t.equals("a")) {
				c=1;
			}
			else if(t.contains("a")) {
				c=-1;
			}
			else {
				c=(long) Math.pow(2,s.length());
			}
			System.out.println(c);
		}
	}
}