import java.util.*;

public class primenumbercheckbyloop{
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            System.out.print("Enter Your Number : ");
            int n = sc.nextInt();

            if(n == 2){
                System.out.print(n + " is prime number");
            }
            else{
                boolean isprime = true;
                for(int i = 2 ; i <= Math.sqrt(n) ; i++){
                    if(n%i == 0){
                        isprime = false;
                    }
                }
                if(isprime == true){
                    System.out.print(n + " is prime number");
                }
                else{
                    System.out.print(n + " is not a prime number");
                }
            }
        }
    }
}
