import java.util.*;

public class firstNnumbersum {
        public static void main(String[] args) {
            try (Scanner sc = new Scanner(System.in)) {
                System.out.print("Enter Your number = ");
                int N = sc.nextInt();
                int sum = 0;
                int countor = 1;

                while(countor <= N){
                    sum = sum + countor;
                    countor++ ;
                }
                System.out.print("Your Answer is = " + sum);
            }
        }    
}