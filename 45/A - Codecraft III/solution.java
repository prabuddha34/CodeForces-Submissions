import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
 
        String a[] = {
            "January", "February", "March", "April",
            "May", "June", "July", "August",
            "September", "October", "November", "December"
        };
 
        String currentMonth = sc.nextLine();
        int n = sc.nextInt();
        int index = 0;
 
        if (a[0].equals(currentMonth)) index = 0;
        else if (a[1].equals(currentMonth)) index = 1;
        else if (a[2].equals(currentMonth)) index = 2;
        else if (a[3].equals(currentMonth)) index = 3;
        else if (a[4].equals(currentMonth)) index = 4;
        else if (a[5].equals(currentMonth)) index = 5;
        else if (a[6].equals(currentMonth)) index = 6;
        else if (a[7].equals(currentMonth)) index = 7;
        else if (a[8].equals(currentMonth)) index = 8;
        else if (a[9].equals(currentMonth)) index = 9;
        else if (a[10].equals(currentMonth)) index = 10;
        else index = 11;
 
        int val = (index + n) % 12;
 
        System.out.print(a[val]);
    }
}