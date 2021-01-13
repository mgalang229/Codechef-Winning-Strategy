import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
       Scanner in = new Scanner(System.in);
       int tt = in.nextInt();
       for (int qq = 1; qq <= tt; qq++) {
           int n = in.nextInt();
           Integer[] a = new Integer[n];
           for (int i = 0; i < n; i++) {
               a[i] = in.nextInt();
           }
           Arrays.sort(a, Collections.reverseOrder());
           long p1 = 0;
           long p2 = 0;
           for (int i = 0; i < n; i++) {
               if (i == 0) {
                   p1 += a[i];
               } else if (i == 1 || i == 2) {
                   p2 += a[i];
               } else if (i % 2 == 1) {
                   p1 += a[i];
               } else {
                   p2 += a[i];
               }
           }
           if (p1 == p2) {
               System.out.println("draw");
           } else if (p1 > p2) {
               System.out.println("first");
           } else {
               System.out.println("second");
           }
       }
    }
}
