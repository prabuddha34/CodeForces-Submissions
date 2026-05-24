import java.util.Scanner;
public class Main {
 
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int n=scanner.nextInt();
        boolean isTriangle = false;
 
        for(int i=1;i<=n;i++){
         int triangle = i * (i + 1) / 2;
            if (triangle == n) {
                isTriangle = true;
                break;
        }
          if (triangle > n) {
                break; // no need to go further
            }
 
 
    }
        if (isTriangle) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
        
        scanner.close();
}
}