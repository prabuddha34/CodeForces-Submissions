import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        boolean VanyaWins=false;
        boolean VovaWins=false;
        int t = input.nextInt();
        while (t-- > 0) {
          int turns= input.nextInt();
          int a=turns+1;
          int b=turns-1;
           if(a%3==0||b%3==0){
             System.out.println("First");
         }
         else
         {
             System.out.println("Second");
         }
        }
    }
}