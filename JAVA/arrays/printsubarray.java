package arrays;

public class printsubarray {

    public static void printsubarrays(int array[]){
        int ts = 0;

            for(int i=0;i<array.length;i++){    //start
                int start= i;
                for(int j=i; j<array.length;j++){   //end
                    int end= j;
                    for(int k=start;k<=end; k++){ //only for print
                        System.out.print(array[k] + " ");    //subarray
                
                    }
                    System.out.println();
                    ts++;
                }
                System.out.println();
                
            }
            System.out.print("total number of subarrays = " + ts);
    } 

    
    public static void main(String[] args){
        int array[] = {2,4,6,8,10};
        printsubarrays(array);
        
    }
    
} 
 