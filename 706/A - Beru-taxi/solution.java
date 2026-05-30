import  java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int a = input.nextInt();
        int b = input.nextInt();
 
        int n = input.nextInt();
 
        double answer= Double.MAX_VALUE;
        for(int i=0;i<n;i++){
            int x=input.nextInt();
            int y=input.nextInt();
            int v=input.nextInt();
 
            double distance = Math.sqrt(
                    (x - a) * (long)(x - a) +
                            (y - b) * (long)(y - b)
            );
            double time = distance / v;
            answer = Math.min(answer, time);
        }
        System.out.printf("%.20f%n", answer);
    }
}