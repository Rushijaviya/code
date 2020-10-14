import java.util.Scanner;

public class Fence {
    public static void main(String args[]){
        int t;
        Scanner sc=new Scanner(System.in);
        t=sc.nextInt();
        while(t-->0){
            int a=sc.nextInt();
            int b=sc.nextInt();
            int c=sc.nextInt();
            int d=Math.max(a,b);
            d=Math.max(d,c);
            System.out.println(d);
        }
        sc.close();
    }
}
