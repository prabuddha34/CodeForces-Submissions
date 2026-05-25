import java.util.HashSet;
import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        HashSet<Character> set = new HashSet<>();
        String str = sc.nextLine();
        for(char c : str.toCharArray()){
            if(c>='a' && c<='z') {
                set.add(c);
            }
        }
        System.out.println(set.size());
    }
}