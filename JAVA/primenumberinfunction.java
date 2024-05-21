import java.util.*;

public class primenumberinfunction{

    public static boolean isprime(int n){

        for(int i = 2;i<=Math.sqrt(n);i++){
            if(n ==2){
                return true;
            }
            else{
                if(n%i ==0){
                return false;}
            }
        }
        return true;
    }

    public static void main (String[] args){
        try (Scanner sc = new Scanner(System.in)) {
            System.out.print("Enter your number : ");
            int n = sc.nextInt();
            System.out.print(isprime(n));
        }
    }
}