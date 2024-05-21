import java.util.Scanner;

public class sumofdigitinnumber {
    public static void main(String[] args) {
       try( Scanner sc = new Scanner(System.in)){
             int sum = 0;
                System.out.print("Enter your number : ");
             int number = sc.nextInt();

          while(number > 0){
            int lastdigit = number % 10 ;
            sum += lastdigit;
            number /= 10;
          }
            System.out.println("sum of the digit in the number : " + sum);
        }
    }
    
}
