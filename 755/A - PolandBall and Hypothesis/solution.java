import java.util.*;
public class Main {
 
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n=scanner.nextInt();
        //n*m+1 is prime 
         
        int check=0;
        for(int m=1;m<=1000;m++){
            check=n*m+1;
            if(!isPrime(check)){
                System.out.println(m);
                break;
               }
              if(isPrime(m)){
                check=0;
                check=n*m+1;
                if(!isPrime(check)){
                    System.out.println(check);
                    break;
                }
              }
 
            }
    
      scanner.close();    
    
}
    public  static boolean isPrime(int n) {
        if (n <= 1) return false;   
        if (n <= 3) return true;
        if (n % 2 == 0 || n % 3 == 0) return false;
        for (int i = 5; i * i <= n; i += 6) {
            if (n % i == 0 || n % (i + 2) == 0) return false;
        }
        return true;
    }
    
}