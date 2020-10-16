import java.util.Scanner;

public class CountingPrettyNumbers {
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int t;
        t=sc.nextInt();
        while(t-->0){
            int a,b;
            a=sc.nextInt();
            b=sc.nextInt();
            int c=Number(a,b);
            System.out.println(c);
        }
        sc.close();
    }
    public static int Number(int a,int b){
        int count =0;
        for(int i=a;i<=b;i++){
        if(i%10==2 || i%10==3 || i%10==9){
            count++;
        }
     }
     return count;   
    }   
}
