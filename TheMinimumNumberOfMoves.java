import java.util.Scanner;
import java.util.Arrays;
public class TheMinimumNumberOfMoves {
    public static void main(String args[]){
        int t;
        Scanner sc=new Scanner(System.in);
        t=sc.nextInt();
        while(t-->0){
            int n,i;
            n=sc.nextInt();
            int a[]=new int[n];
            for(i=0;i<n;i++)
            a[i]=sc.nextInt();
            Arrays.sort(a);
            int x=a[0];
            int sum=0;
            for(i=0;i<n;i++)
                sum += (a[i]-x);
            System.out.println(sum);
        }
    sc.close();
    }
}
