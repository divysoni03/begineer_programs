import java.util.*;

public class hollowsquare {
  
    public static void hollow_square(int number){

        //outer loop to control line 
        for(int i=1; i<=number; i++){

            //inner loop to decide what to print in the line 
            //inner loop for stars and spaces 
            for(int j=1; j<=number; j++){

                //boundry condition
                if(i==1 || i==number || j==1 || j==number ){
                    System.out.print("* ");
                }
                else{
                    System.out.print("  "); //i dotnt know how this spaces works but it works perfact
                }
            }
            System.out.println();
        }
    }

    public static void main(String[] args){

        try (Scanner sc = new Scanner(System.in)){
            
            //for inputs
            System.out.print("Enter Your Number : ");
            int number = sc.nextInt();
            
            //calling func
            hollow_square(number);
        }
    }
}
