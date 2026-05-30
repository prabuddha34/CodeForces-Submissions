import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        long totalCost=0;
        int minPrice=Integer.MAX_VALUE;
        for(int i=1;i<=n;i++){
            int a=scanner.nextInt();
            int p=scanner.nextInt();
            minPrice=Math.min(minPrice,p);
            totalCost+=(long)a*minPrice;
        }
        System.out.println(totalCost);
    }
}