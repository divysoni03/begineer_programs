import java.util.*;

public class invertedrotatedhalfpyramid {

    public static void invert(int number){

        //outer loop
        for(int i = 1; i <= number; i++){

            //loop for spaces
            for(int j = 1; j <= (number-i); j++){
                System.out.print("  ");
            }

            //loop for stars
            for(int j = 1; j<=i; j++){  //if we change (j<=i) to (j<=number) then we will get a solid rohmbus
                System.out.print("* ");
            }

            //to go on next line
            System.out.println();
        }
    }

    public static void main(String[] args){
        try (Scanner sc = new Scanner(System.in)){

            System.out.print("Enter your number : ");
            int number = sc.nextInt();
            invert(number);
        }
    }
}
