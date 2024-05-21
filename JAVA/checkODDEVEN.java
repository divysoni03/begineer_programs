import java.util.*;


public class checkODDEVEN {

    public static boolean isEven(int number){
        if(number % 2 == 0 ){
            return true;
        }
        else{
            return false;
        }
    }


    public static void main(String[] args ){
        try (Scanner sc = new Scanner(System.in)){

            System.out.print("Enter Your Number : ");
            int number = sc.nextInt();

            if(isEven(number)){
                System.out.println("Your number is EVEN");
            }
            else{
                System.out.println("Your number is ODD");
            }
        }
    }
}
