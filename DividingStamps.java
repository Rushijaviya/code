import java.util.Scanner;
public class DividingStamps{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int []a=new int[n];
        int i,sum=0;
        for(i=0;i<n;i++){
        a[i]=sc.nextInt();
        sum=sum+a[i];
    }
    int cum=(n*(n+1))/ 2;
    if(cum==sum)
    System.out.println("YES");
    else
    System.out.println("NO");
    }
}
