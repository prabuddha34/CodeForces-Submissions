import  java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int div=0;
        while (t-- > 0) {
            int a = input.nextInt();
            int b = input.nextInt();
 
 
            int rem=a%b;
 
            if(rem==0){
                System.out.println(0);
            }
            else{
                System.out.println(b-rem);
            }
 
        }
    }
}