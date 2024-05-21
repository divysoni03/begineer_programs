import java.util.*;

public class javafunction {

    public static void factorial(){
        try (Scanner sc = new Scanner(System.in)) {
            System.out.print("Enter your number : ");
            int number = sc.nextInt();
            int sum =1;

            for(int i = 1 ; i <= number ; i++ ){
               sum *= i ;
            }
            System.out.print("Your Factorial is : " + sum);
        }
    }



    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            int sum = a + b ;
            System.out.println("your sum is : " + sum);
        }
        factorial();
    }
    
}
