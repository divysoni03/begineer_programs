package arrays;
import java.util.*;

public class binarusearch {
    public static int binaryseach1(int number[],int key){
        //from psudecode make start and end for loop
        int start =0,end = number.length;

        //first loop
        while(start <= end){
            //define mid numb
            int mid = (start + end)/2;

            //condition
            if(number[mid] == key){
                return mid;
            }
            if(number[mid] < key){ //right side area of array
                start = mid +1;
            }
            else{
                end = mid -1;
            }

        }

        return -1;
    }

    public static void main(String[] args) {
       try(Scanner sc = new Scanner(System.in)){

            int number[] = {2,4,6,8,10,12,14,16,18,20,22,24};
            System.out.print("Enter your number to find in array : ");
            int key = sc.nextInt();

            System.out.print("your entered keys index is : " + binaryseach1(number, key));
        }
    }
}
