import java.util.Scanner;
import java.util.ArrayList;

public class Myclass {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        ArrayList<Long> res = new ArrayList<Long>();
        for (int i = 0; i < t; i++) {
            long a, b, rem, moves = 0;
            a = input.nextLong();
            b = input.nextLong();
            rem = a % b;
            if (rem != 0) {
                moves += (b - rem);
            } else {
                moves = 0;
            }
            res.add(moves);
        }
        for (long x : res) {
            System.out.println(x);
        }
    }
}