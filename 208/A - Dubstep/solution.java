import java.util.Scanner;
 
public class Main {
 
    public static void main(String[] args) {
 
        Scanner input = new Scanner(System.in);
 
        String str = input.nextLine();
 
        String result = str.replaceAll("WUB", " ");
 
        result = result.trim().replaceAll("\\s+", " ");
 
        System.out.println(result);
    }
}