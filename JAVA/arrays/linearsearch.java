package arrays;
import java.util.*;

//find the index of element in a given array
public class linearsearch {
 
    public static int linearsearchm(int numbers[] , int key){

        for(int i=0; i<numbers.length; i++){
            if(numbers[i] == key){
                return i;
            }
        }
        return -1;

    }

    public static void main(String[] args){
        try (Scanner sc = new Scanner(System.in)) {
            int numbers[] = {2,4,6,8,10,12,14,16,18,20,22,24,26};
            System.out.print("Enter Your Number To Find In Array : ");
            int key = sc.nextInt();

            int index = linearsearchm(numbers , key);
            if(index == -1){
                System.out.print("NOT FOUND IN ARRAY");
            }
            else{
                System.out.print("Your entered number's index is : " + index);
            }
        }
    }
}
