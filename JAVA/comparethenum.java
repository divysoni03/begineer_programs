import java.util.*;

public class comparethenum{
     public static void main(String[] args){

        try (Scanner sc = new Scanner(System.in)) {
            System.out.print("Enter your number a = ");
            int a = sc.nextInt();
            System.out.print("Enter your number b = ");
            int b = sc.nextInt();

        if(a == b){
                System.out.print("both are EQUAL");
        }
        else {
                if(a < b){
                    System.out.print("a is less than b");
                }
                else{
                    System.out.print("b is less than a");
                }
        }
        }
    }
}