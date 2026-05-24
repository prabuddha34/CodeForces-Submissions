import java.util.Scanner;
 
public class Main {
 
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
 
        String a=scanner.nextLine();
        String b=scanner.nextLine();
 
        String c=" ";
 
        for(int i=0;i<a.length();i++){
            if(a.charAt(i) == b.charAt(i)){
                c +='0';
            } else {
                c += '1';
            }
        }
        System.out.println(c.trim());
        scanner.close();
     }
}