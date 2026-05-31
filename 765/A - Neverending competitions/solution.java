import  java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        String home=input.next();
        int out=0;
        int in=0;
        for(int i=0;i<n;i++){
            String str=input.next();
            String from = str.substring(0, 3);
            String to = str.substring(5, 8);
 
            if (from.equals(home)) out++;
            if (to.equals(home)) in++;
        }
        if (out > in) {
            System.out.println("contest");
        } else {
            System.out.println("home");
        }
    }
    }