package arrays;

public class sumofsubarray {

    public static void sumofsubarrays(int array[]){

        int totalsubarray=0;
        int sum=0;
        for(int i=0;i<array.length;i++){
            int start=0;
            for(int j=0;j<array.length;j++){
                int end=0;
                for(int k=start;k<end;k++){ 
                    sum += k;
                }
            }
        }
        System.out.print(totalsubarray);
    }

    public static void main(String[] args) {
        int array[]= {-1 ,2 ,4 ,-5};
    }
}
