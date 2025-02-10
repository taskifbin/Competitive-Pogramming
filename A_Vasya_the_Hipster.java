
import java.util.Scanner;

public class A_Vasya_the_Hipster {
    public static void main(String[] args) {
        int a,b;
        Scanner sc = new Scanner(System.in);
        a = sc.nextInt();
        b = sc.nextInt();
        System.out.println(Math.min(a,b) + " " + Math.max((a-Math.min(a,b))/2,(b - Math.min(a,b))/2));

    }
}