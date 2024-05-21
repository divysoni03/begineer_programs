package arrays;

public class pairsinarray {

    public static void printpairs(int array[]){
        for(int i=0; i<array.length;i++){   //for first number of pair
            int constant=array[i];  //we will store first number in this var so we can print it
            for(int j=i+1;j<array.length; j++){ //second loop for second number in pair that changes(increase)
                System.out.print("(" + constant + "," + array[j] + ")");    //in this we can also use array[i] besides of constant 
                
            }
            System.out.println();
        }

    }


    public static void main(String[] args){
        int array[] = {2,4,6,8,10};
        printpairs(array);
        
    }
    
}
 