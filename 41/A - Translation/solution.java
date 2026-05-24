import java.util.Scanner;
 
public class Main{
    public static void main(String[] args) {
            Scanner scanner = new Scanner(System.in);
 
                    String s = scanner.nextLine();
                            String t = scanner.nextLine();
 
                                    // Manually reverse s
                                            String reversed = "";
                                                    for (int i = s.length() - 1; i >= 0; i--) {
                                                                reversed += s.charAt(i);
                                                                        }
 
                                                                                // Compare reversed s with t
                                                                                        if (reversed.equals(t)) {
                                                                                                    System.out.println("YES");
                                                                                                            } else {
                                                                                                                        System.out.println("NO");
                                                                                                                                }
                                                                                                                                    }
                                                                                                                                    }