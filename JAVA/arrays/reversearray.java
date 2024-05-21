package arrays;

public class reversearray {
    public static void reverse(int number[]){
        int first =0,last= number.length -1; //temp var for loop

        while(first < last){
            //swap code
            int temp = number[last];
            number[last] = number[first];
            number[first] = temp;

            //increment for first and decrement for last
            first++;
            last--;
        }
    }

    public static void main(String[] args){
        int number[] = {2,4,6,8,10};
        System.out.print("Your array before reverse : ");
        for(int i=0;i<number.length;i++){
            System.out.print(number[i] +" ");
        }

        System.out.println();

        reverse(number);
        System.out.print("Your array after reverse : ");
        for(int i=0; i<number.length;i++){
            System.out.print(number[i] +" ");
        }
    }
}
