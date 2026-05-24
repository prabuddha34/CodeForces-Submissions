import java.util.*;
public class Main {
 
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n=scanner.nextInt();
        
        for(int i=1;i<=n/2;i++){
            int a=i;
            int b=n-i;
            if(composite(a) && composite(b)){
                System.out.println(a+" "+b);
                return; 
            }
        }
 
 
 
 
 
 
    
 
    }
    public static boolean composite(int n){
        if (n < 2) return false; 
        for (int i = 2; i <= Math.sqrt(n); i++) {
            if (n % i == 0) {
                return true; 
            }
        }
        return false; 
    }
      
       
 
}