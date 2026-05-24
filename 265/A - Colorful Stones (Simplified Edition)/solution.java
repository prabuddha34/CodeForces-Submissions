import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
            Scanner scanner = new Scanner(System.in);
                    
                            String s = scanner.nextLine();  // Stones
                                    String t = scanner.nextLine();  // Instructions
 
                                            int pos = 0;  // 0-based position of Liss on stones
 
                                                    for (int i = 0; i < t.length(); i++) {
                                                                if (pos < s.length() && s.charAt(pos) == t.charAt(i)) {
                                                                                pos++;
                                                                                            }
                                                                                                    }
 
                                                                                                            // Output final 1-based position
                                                                                                                    System.out.println(pos + 1);
                                                                                                                        }
                                                                                                                        }