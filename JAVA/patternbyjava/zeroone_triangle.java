import java.util.*;

public class zeroone_triangle {

    public static void zeroonetriangle(int number){
        

        //outer loop for lines
        for(int i=1; i<= number; i++){

            //inner loop to print numbers and cols
            for(int j=1;j<=i;j++){

                //check condition for printing "1" or "0"
                if( (i+j) % 2 == 0){    
                    System.out.print("1 ");
                }
                else{
                    System.out.print("0 ");
                }
            }
            System.out.println();
        }
    }

    public static void main(String[] args){
        try (Scanner sc = new Scanner(System.in)){
            
            //for input of number
            System.out.print("Enter Your Number : ");
            int number = sc.nextInt();

            zeroonetriangle(number);    //calling function

        }
    }
}
