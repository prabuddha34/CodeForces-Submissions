import java.util.Scanner;
public class Main {
 
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n=scanner.nextInt();
        String input=scanner.next();
        int countA=0;
        int countD=0;
        for(int i=0;i<n;i++){
            if(input.charAt(i)=='A'){
                countA++;
            }else if(input.charAt(i)=='D'){
                countD++;
            }
        }
        if(countA > countD){
            System.out.println("Anton");
        }
        else if(countD > countA){
            System.out.println("Danik");
        }
        else{
            System.out.println("Friendship");
        }
    }
}