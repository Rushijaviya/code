import java.util.*;

public class SplittingCandies{
    public static void main(String args[]){
        try{
        Scanner sc=new Scanner(System.in);
        long t;
        t=sc.nextLong();
        while(t-->0){
            long n,k;
            n=sc.nextLong();
            k=sc.nextLong();
            if(k==0)
            System.out.println(0 + " " + n);
            else{
            System.out.print(n/k + " ");
            System.out.println(n%k);
        }
        }
        sc.close();
        }
        catch(Exception e){
            return;
        }
    }
}