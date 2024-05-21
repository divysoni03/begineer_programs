import java.util.*;

public class largestnum {
  

    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
         System.out.print("enter your first number = ");
              int a = sc.nextInt();

           System.out.print("enter your second number = ");

              int b = sc.nextInt();

           System.out.print("enter your third number = ");

              int c = sc.nextInt();


          if( ( a > b ) && ( a > c )) {
           System.out.print("Your largest number is = " + a);

          }    
          else if( ( b > a ) && ( b > c )){
           System.out.print("Your largest number is = " + b);

          }
          else {
            System.out.print("Your largest number is = " +  c);

          
          }
      }

    }  
}
