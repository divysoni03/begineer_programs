import java.util.*;

public class BINandDECconversen{

    public static void bintodec(int binNUM){
        int myNUM =binNUM;
        int pow = 0;
        int decNUM = 0;

        while(binNUM > 0){
            int lastdigit = binNUM % 10;
            decNUM = decNUM + (lastdigit * (int)Math.pow(2,pow));

            pow++;
            binNUM =binNUM/10;
        }
        System.out.println("decimal of " + myNUM + " = "+ decNUM);
    }

    public static void dectobin(int n){
        int myNUM = n;
        int pow = 0;
        int binNUM = 0;

        while( n > 0 ){
            int reminder = n % 2;
            binNUM = binNUM + (reminder * (int)Math.pow(10,pow));

            pow++;
            n = n/2;
        }
        System.out.println("binary of " + myNUM + " = " + binNUM );
    }

    
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            System.out.print("Enter Your Number to convert into binary : ");
            int n = sc.nextInt();
            System.out.print("Enter your number to convert into decimal : ");
            int binNUM = sc.nextInt();

            dectobin(n);
            bintodec(binNUM);
        }
        
    }
}