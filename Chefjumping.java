import java.util.Scanner;

public class Chefjumping {
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt();
        int x=a%6;
        if(x==0 || x== 1 || x==3)
        System.out.println("yes");
        else
        System.out.println("no");
    }
}
