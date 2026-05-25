import java.util.HashSet;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        String s=input.next().toLowerCase();
        HashSet<Character> set = new HashSet<>();
        for(int i=0;i<s.length();i++){
            set.add(s.charAt(i));
        }
        if(set.size()==26){
            System.out.println("YES");
        }
        else {
            System.out.println("NO");
        }
    }
}