import java.util.Arrays;
import  java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int  n=sc.nextInt(); //Number of restraunts
        int k=sc.nextInt(); //Number of time given by coach
 
        int fi[]=new int[n];
        int ti[]=new int[n];
 
        for(int i=0;i<n;i++){
            fi[i]=sc.nextInt();
            ti[i]=sc.nextInt();
        }
        for(int i=0;i<n;i++){
            if(ti[i]>=k){
                fi[i]=fi[i]-(ti[i]-k);
            }
        }
        //Array is updated
        Arrays.sort(fi);
        System.out.println(fi[fi.length-1]);
 
    }
}