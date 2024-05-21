import java.util.*;

public class invertedhalfpyramidwithnumbers {
    

    public static void invert(int number){

        //outer loop
        for(int i =1; i<=number ;i++){

            //innner loop for numbers
            for(int j=1; j<=(number-i+1);j++){
                System.out.print(j + " ");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)){

            System.out.print("Enter your number : ");
            int number = sc.nextInt();
            invert(number);
        }
    }
}
