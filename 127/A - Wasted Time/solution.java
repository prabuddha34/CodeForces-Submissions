import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int x[]=new int[n];
        int y[]= new int[n];
 
        for(int i=0;i<n;i++){
            x[i]=sc.nextInt();
            y[i]=sc.nextInt();
        }
        double length=0.0;
        for(int i=0;i<n-1;i++){
            int dx=x[i+1]-x[i];
            int dy=y[i+1]-y[i];
 
            length+=Math.sqrt(dx*dx+dy*dy);
 
        }
        double totalTime=(length*k)/50.0;
        System.out.println(totalTime);
    }
}