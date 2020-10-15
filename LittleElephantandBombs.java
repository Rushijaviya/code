import java.util.Scanner;

public class LittleElephantandBombs{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int t;
        t=sc.nextInt();
        while(t-->0){
            int n;
            n=sc.nextInt();
            String s;
            s=sc.next();
            char[] arr = s.toCharArray();
            for(int i=0;i<n;i++){
                if(arr[i]=='1'){
                    if(i-1>=0 && arr[i-1]!='1')
                    arr[i-1]='3';
                    if(i+1<n && arr[i+1]!='1')
                    arr[i+1]='3';
                }
            }
            int c=0;
            for(int i=0;i<n;i++){
                if(arr[i]=='0')
                c++;
            }
            System.out.println(c);
        }
        sc.close();
    }
}
