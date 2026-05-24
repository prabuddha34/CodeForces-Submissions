import java.util.*;
public class Main {
 
    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);
        int n=scanner.nextInt();
        int arr[]=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=scanner.nextInt();
        }
        //Largest in the array
        int largest=arr[0];
        int sum=0;
 
        for(int i=0;i<n;i++){
            if(arr[i] > largest){
                largest=arr[i];
            }
 
        }
        //Find the differcne of each element with the largest
 
        for(int i=0;i<n;i++){
            int diff=largest-arr[i];
            sum=sum+diff;
 
        }
        System.out.println(sum);
    }
}