import java.util.ArrayList;
import java.util.Scanner;

public class Myclass{
    public static void main(String[] args){
        int t;
        ArrayList<Integer> res = new ArrayList<Integer>();
        Scanner input = new Scanner(System.in);
        t=input.nextInt();
        for(int i=0;i<t;i++){
            int n = input.nextInt();
            if(n%2==0)
                res.add((n/2)-1);
            else
                res.add((n/2));
        }
        for(int x: res){
            System.out.println(x);
        }
    }
}