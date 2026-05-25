import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        int faces=0;
        for (int i = 0; i < t; i++) {
          String s = sc.next();
 
          if(s.equals("Tetrahedron")){
              faces=faces+4;
          }
          if(s.equals("Cube")){
           faces=faces+6;
          }
            if(s.equals("Octahedron")){
               faces=faces+8;
            }
            if(s.equals("Dodecahedron")){
           faces=faces+12;
            }
            if(s.equals("Icosahedron")){
                faces=faces+20;
 
            }
        }
        System.out.println(faces);
    }
}