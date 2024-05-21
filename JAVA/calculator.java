import java.util.Scanner;

public class calculator {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
                System.out.print("Enter your first number = ");

                double a = sc.nextDouble();

                System.out.print("Enter your second number = ");

                double b = sc.nextDouble();

                System.out.print("Enter your operator = ");
                char operator = sc.next().charAt(0);// I DONT KNOW WHAT .charAT DOING

                switch(operator){
                    case '+': System.out.print("Your answer is = " + (a+b));
                             break;
                    case '-': System.out.print("Your answer is = " + (a-b));
                            break;
                    case '*': System.out.print("Your answer is = " + (a*b));
                            break;
                    case '/':System.out.print("Your answer is = " + (a/b));
                            break;
                    case '%':System.out.print("Your answer is = " + (a%b));
                            break;
                    default:System.out.print("Your entered operator is wrong");
                }
        }
    }
}
