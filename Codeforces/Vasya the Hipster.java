import java.util.Scanner;

public class Vasya{
    public static void main( String[] args ) {
        Scanner input = new Scanner(System.in);
        int a,b,d,s;
        a=input.nextInt();
        b=input.nextInt();
        if(a>b){
            d=b;
            s=(a-b)/2;
        }
        else{
            d=a;
            s=(b-a)/2;
        }
        System.out.println(d+" "+s);
    }
}