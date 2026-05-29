import  java.io.*;
import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);
        int n=scanner.nextInt();
        int k[]=new int[n];
 
        for(int i=0;i<n;i++){
            k[i]=scanner.nextInt();
        }
 
        int ans=Integer.MAX_VALUE;
 
        for(int i=0;i<n;i++){
            int total=0;
            for(int j=0;j<k[i];j++){
            int items=scanner.nextInt();
            total+=items*5+15;
 
            }
            ans=Math.min(ans,total);
        }
        System.out.println(ans);
    }
}