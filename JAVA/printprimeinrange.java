import java.util.*;

public class printprimeinrange{


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

    public static void printprime(int n){
        for(int i=2;i<=n;i++){
            if(isprime(i)){
                System.out.print(i +" ");
            }
        }
        System.out.println();
    }


    public static void main (String[] args){
        try (Scanner sc = new Scanner(System.in)) {
            System.out.print("Enter your Range : ");
            int n = sc.nextInt();
            printprime(n);
        }
        
    }
}