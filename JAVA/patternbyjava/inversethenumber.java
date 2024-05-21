import java.util.*;

public class inversethenumber {
    
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            System.out.print("Enter your number = ");
            int n = sc.nextInt();

            while(n > 0){
                int lastdigit = n %10;
                System.out.print(lastdigit + " ");
                n = n / 10;
            }
        }
       
    }
}
