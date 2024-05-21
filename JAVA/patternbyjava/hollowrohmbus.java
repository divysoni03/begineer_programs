import java.util.*;

public class hollowrohmbus {
    

    public static void hollow_rohmbus(int number){

        //outer loop 
        for(int i =1; i<=number; i++){

            //innner loop for spaces
            for(int j =1; j<= (number-i);j++){
                System.out.print(" ");
            }

            //hollow rectangle
            for(int j=1; j<=number; j++){

                //condition for boundry
                if( i==1 || i==number || j==1 || j==number ){
                    System.out.print("* ");
                }
                else{
                    System.out.print("  ");
                }
            }

            //for nextline
            System.out.println();
        }
    }

    public static void main(String[] args){

        try (Scanner sc = new Scanner(System.in)){

            //for inputs
            System.out.print("Enter Your Number : ");
            int number = sc.nextInt();

            //calling func
            hollow_rohmbus(number);
        }
    }
}
