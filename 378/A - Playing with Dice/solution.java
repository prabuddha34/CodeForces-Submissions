import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a=sc.nextInt();
        int b=sc.nextInt();
 
          int p1Win = 0, draw = 0, p2Win = 0;
          for(int i = 1; i <= 6; i++) {
            int d1=Math.abs(i-a);
            int d2=Math.abs(i-b);
            if (d1 < d2) {
                p1Win++;
            }else if (d1 > d2) {
                p2Win++;
            }else {
                draw++;
            }
 
    }
    System.out.println(p1Win + " " + draw + " " + p2Win);
    sc.close();
 
    }
}      
 