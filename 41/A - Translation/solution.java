import java.util.Scanner;
public class Main {
 
    //code
    //edoc
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        String rev=sc.nextLine();
 
         String rev1="";
        for(int i=s.length()-1;i>=0;i--){
            rev1=rev1+s.charAt(i);
        }
        if(rev1.equals(rev)){
            System.out.println("YES");
        }
        else{
            System.out.println("NO");
        }
    }
}