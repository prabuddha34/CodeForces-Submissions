import java.util.Scanner;
 
public class Main {
 
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
 
        int n = Integer.parseInt(scanner.nextLine()); 
        String line = scanner.nextLine(); 
 
        String[] words = line.split(" ");
        int maxVolume = 0;
 
        for (String word : words) {
            int count = 0;
            for (int i = 0; i < word.length(); i++) {
                char ch = word.charAt(i);
                if (Character.isUpperCase(ch)) {
                    count++;
                }
            }
            maxVolume = Math.max(maxVolume, count);
        }
 
        System.out.println(maxVolume);
        scanner.close();
    }
}
 