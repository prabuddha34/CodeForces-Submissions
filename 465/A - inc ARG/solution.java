import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int  n=sc.nextInt();
        String s=sc.next();
        int changes=0;
        for(int i=0;i<n;i++){
            changes++;
            if(s.charAt(i) =='0'){
                break;
            }
        }
        System.out.println(changes);
    }
}