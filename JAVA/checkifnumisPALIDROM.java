import java.util.*;

public class checkifnumisPALIDROM {

    //helper function that reverse the number and return it to the main function
    public static int reverse(int number){
        int reversenum = 0;
        while(number > 0){
           int lastdigit = number % 10;    //stores the lastdigit of number temporary 
           reversenum = (reversenum * 10) + lastdigit ; 
           number /= 10;    //removes the lastdigit of the number so loop can work again
        }

        return reversenum;    //return the reverse of the number to the call location
    }

    public static void main(String[] args){
        try (Scanner sc = new Scanner(System.in)) {
            System.out.print("Enter Your Number : ");
            int number = sc.nextInt();     //capture the entered number

            //checks that entered number and reverse number is same or not
            if(number == reverse(number)){     
                System.out.print("your entered number "+ number + " is PALIDROME number");
            }
            else{
                System.out.print("your entered number" + number + " is not PALIDROME number");
            }
        }
    }
}
