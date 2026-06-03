import  java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String str = input.nextLine();
        int pearls=0;
        int links=0;
        for(char c:str.toCharArray()){
            if(c=='o'){
                pearls++;
            }
            else{
                links++;
            }
 
        }
        if (pearls == 0 || pearls == 1) {
            System.out.println("YES");
        } else {
            System.out.println(links % pearls == 0 ? "YES" : "NO");
        }
    }
}