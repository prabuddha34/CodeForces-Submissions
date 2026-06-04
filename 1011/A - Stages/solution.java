import java.util.Arrays;
import  java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int k = input.nextInt();
        String s = input.next();
        char[] arr = s.toCharArray();
        Arrays.sort(arr);
        int count=0;
        int sum=0;
        char last=0;
        for(char ch:arr){
            if(count ==0 ||ch-last>=2){
                sum += (ch - 'a' + 1);
                last = ch;
                count++;
            }
 
            if (count == k) {
                System.out.println(sum);
                return;
            }
        }
        System.out.println(-1);
    }
}