import java.util.*;

public class sumofonlyoddorevennumber {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int number;
            int choice;
            int evensum = 0;
            int oddsum = 0;

            do {
                System.out.print("Enter the number : ");
                number = sc.nextInt();

                if( number % 2 == 0){
                    evensum += number;
                } else{
                    oddsum += number;
                }
                System.out.println("Do you want to continue ? press 1 for YES or 0 for NO");

                choice = sc.nextInt();
                
            }
            while(choice == 1);{
              System.out.println("sum of even number is : " + evensum);
              System.out.println("sum of odd number is : " + oddsum);
            }
        }
    }
    
}
