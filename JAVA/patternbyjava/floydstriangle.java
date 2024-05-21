import java.util.*;

public class floydstriangle {
    
    public static void floyd_triangle(int number){

        //counter to print numbers
        int counter = 1;

        //outer loop for lines
        for(int i =1; i<=number ;i++){


            //loop for spaces
            for(int j =1; j<=(number-i);j++){
                System.out.print(" ");
            }
            
            //inner loop to define how many time we have to print counter
            for(int j=1; j<=i ;j++){
                System.out.print(counter+" ");
                counter++;
            }
            System.out.println();
        }
    }

    public static void main(String[] args){
        try (Scanner sc = new Scanner(System.in)){

            System.out.print("Enter Your number : ");
            int number = sc.nextInt();
            
            floyd_triangle(number);
        }
    }
}
