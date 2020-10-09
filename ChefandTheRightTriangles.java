import java.util.Scanner;
public class ChefandTheRightTriangles{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int t,d=0;
        t=sc.nextInt();
        while(t-->0){
            int x1,x2,x3,y1,y2,y3;
            x1=sc.nextInt();
            y1=sc.nextInt();
            x2=sc.nextInt();
            y2=sc.nextInt();
            x3=sc.nextInt();
            y3=sc.nextInt();
            int a=(x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
            int b=(x1-x3)*(x1-x3) + (y1-y3)*(y1-y3);
            int c=(x3-x2)*(x3-x2) + (y3-y2)*(y3-y2);
            if(a+b==c || b+c==a || a+c==b)
            d++;
        }
        System.out.print(d);
        sc.close();
    }
}