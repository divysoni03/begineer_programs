//inspired by triangle pattern easily  

import java.util.*;

public class diamondpattern {
    
    public static void diamond(int number){

        //outer loop 1st half
        for(int  i =1; i<=number;i++){

            //spaces
            for(int j =1; j<=(number-i); j++){
                System.out.print(" ");
            }

            //inner loop for stars
            for(int j =1; j<=i ; j++){
                System.out.print("*");
            }

            //inner loop for stars
            for(int j =2; j<=i ; j++){
                System.out.print("*");
            }

            System.out.println();
        }

        //outer loop for second half
        for(int i =number; i>=1+1; i--){

            //inner loop spaces
            for(int j =1; j<=(number-i) ; j++){
                System.out.print(" ");
            }

            //inner loop for stars
            for(int j =1; j<=i ; j++){
                System.out.print("*");
            }

            //inner loop for stars
            for(int j =2; j<=i ; j++){
                System.out.print("*");
            }
            System.out.println();
        }
        
    }

    public static void main(String[] args){
        try (Scanner sc = new Scanner(System.in)){
            System.out.print("Enter Your Number : ");
            int number = sc.nextInt();

            diamond(number);

        }
    }
}
