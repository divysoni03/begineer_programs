import java.util.*;

public class factorialofnumber {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            System.out.print("Enter Your number to get factorial : ");
            long number = sc.nextInt();
            long answer = 1;
            long n = 1;

            while(n <= number){
                answer = answer * n;
                n++;
            }
            System.out.print("Your number's factorial is : " + answer);
        }
    }
}
