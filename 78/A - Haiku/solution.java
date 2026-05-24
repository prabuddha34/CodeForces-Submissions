import java.util.*;
public class Main {
 
    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);
        String input1=scanner.nextLine();
        String input2=scanner.nextLine();
        String input3=scanner.nextLine();
        int count1=0;
        int count2=0;
        int count3=0;
        for(int i=0;i<input1.length();i++){
            if(input1.charAt(i) =='a' || input1.charAt(i) =='e' || input1.charAt(i) =='i' || input1.charAt(i) =='o' || input1.charAt(i) =='u'){
            count1++;
            }
        }
        for(int i=0;i<input2.length();i++){
            if(input2.charAt(i) =='a' || input2.charAt(i) =='e' || input2.charAt(i) =='i' || input2.charAt(i) =='o' || input2.charAt(i) =='u'){
            count2++;
            }
        }
        for(int i=0;i<input3.length();i++){
            if(input3.charAt(i) =='a' || input3.charAt(i) =='e' || input3.charAt(i) =='i' || input3.charAt(i) =='o' || input3.charAt(i) =='u'){
            count3++;
            }
        }
        if(count1 ==5 && count2 ==7 && count3 ==5){
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
 
    }
}