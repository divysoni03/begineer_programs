import java.util.*;

public class solidrhombus {
    

    public static void solidrhombus1(int number){

        //outer loop for lines
        for(int i =1; i<=number;i++){

            //spaces
            for(int j =1;j<=(number-i);j++){
                System.out.print(" ");
            }

            //stars
            for(int j =1;j<=number;j++){
                System.out.print("*");
            }

            //nextline
            System.out.println();
        }
    }

    public static void main(String[] args){
        try (Scanner sc = new Scanner(System.in)){

            //input
            System.out.print("Enter Your Number : ");
            int number = sc.nextInt();

            //calling function
            solidrhombus1(number);
        }
    }
}
