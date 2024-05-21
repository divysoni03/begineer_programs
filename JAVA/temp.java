import java.util.*;

public class temp {

    
    public static int inverse(int number){
        int lastdigit =0;
        int inverse =0;

        while(number >0){
            lastdigit = number % 10;
            inverse = (inverse*10) + lastdigit;
            number /= 10;
        }
        return inverse;
    }

    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)){
            System.out.print("Enter Your Number : ");
            int number = sc.nextInt();

            if(number == inverse(number)){
                System.out.println("your entered number is palidrome number");
            }
            else{
                System.out.println("your entered number is not pelidrome number");
            }
        }
    }
}
