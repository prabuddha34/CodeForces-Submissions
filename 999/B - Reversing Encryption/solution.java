import  java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        String s = input.next();
 
        char[] arr = s.toCharArray();
        for(int i = 1; i <= n; i++){
         if(n%i==0){
             reverse(arr,i);
         }
        }
 
        System.out.println(new String(arr));
    }
    public static void reverse(char s[],int d){
        int l=0;
        int r=d-1;
        while(l<r){
            char temp = s[l];
            s[l] = s[r];
            s[r] = temp;
            l++;
            r--;
        }
 
    }
}