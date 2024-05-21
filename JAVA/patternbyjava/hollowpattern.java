import java.util.*;

public class hollowpattern {
    
    public static void hollow_rectangle(int totalrow, int totalcols){

        //outer loop
        for(int i =1; i <= totalrow ;i++){

            //inner loop
            for(int j = 1; j <= totalcols; j++){

                //boundry condition
                if( i == 1 || i == totalrow || j == 1 || j == totalcols ){
                    System.out.print("*");
                }
                else{
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
    }


    public static void main(String[] args) {
       try (Scanner sc = new Scanner(System.in)){
            System.out.print("Enter number of rows : ");
            int a = sc.nextInt();
            System.out.print("Enter number of cols : ");
            int b = sc.nextInt();
            hollow_rectangle(a, b);
       }
    }

}
