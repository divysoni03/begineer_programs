import java.util.*;

public class butterflypattern {
    

    public static void main(String[] args){
        try (Scanner sc = new Scanner(System.in)){

            //for input
            System.out.print("Enter your number : ");
            int number = sc.nextInt();

            //calling the function
            butterfly(number);
        }
    }


    public static void butterfly(int number){
        //outer loop for 1st half
        for(int i = 1; i<=number; i++){

            //inner loop for starting star
            for(int j =1; j<=i; j++){
                System.out.print("*");
            }

            //inner loop for spaces
            for(int j=1;j <= 2*(number-i);j++){
                System.out.print(" ");
            }

            //inner loop for stars
            for(int j=1 ; j<= i;j++){
                System.out.print("*");
            }

            //for next line
            System.out.println();
        }

         //outer loop for second half
            for(int i =number;i>=1;i--){
                
                //inner loop for starting stars
                for(int j =1; j<=i; j++){
                    System.out.print("*");
                }

                //inner loop for spaces
                for(int j=1;j <= 2*(number-i);j++){
                    System.out.print(" ");
                }

                //inner loop for stars again
               for(int j=1 ; j<= i;j++){
                   System.out.print("*");
                }
                
                System.out.println();
            }

    }


}
