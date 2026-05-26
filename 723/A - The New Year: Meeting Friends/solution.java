import java.util.Arrays;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int a[]=new int[3];
 
        for(int i=0;i<3;i++){
            a[i]=input.nextInt();
        }
        Arrays.sort(a);
        int median=a[1];
        int distance = Math.abs(a[0] - median)
                + Math.abs(a[1] - median)
                + Math.abs(a[2] - median);
        System.out.println(distance);
 
    }
}