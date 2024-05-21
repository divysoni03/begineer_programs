//this code for triangle we can use in diamond shape pattern we have to just reverse it again

import java.util.*;

public class trianglebystars {
    
    public static void triangle(int number){

        //outer loop
        for(int i =1; i<=number; i++){

            //inner loop spaces
            for(int j =1; j<=(number-i) ; j++){
                System.out.print(" ");
            }

            //inner loop for stars
            for(int j =1; j<=i ;j++){
                System.out.print("*");
            }

            //right side stars
            for(int j =2; j<=i; j++){
                System.out.print("*");
            }

            //for nextline
            System.out.println();
        }
    }

    public static void main(String[] args){
        try (Scanner sc = new Scanner(System.in)){
            System.out.print("Enter Your Number : ");
            int number = sc.nextInt();

            triangle(number);

        }
    }
}
