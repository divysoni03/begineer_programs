package arrays;

public class updatingarraynumber{
    
    public static void update(int marks[]){
        for(int i=0; i<marks.length ;i++){
            marks[i] = marks[i] +1;
        }
    }

    public static void main(String[] args){
        int marks[] = {1,2,3,4,5,6,7,8,9};
        update(marks);
        for(int i=0; i<marks.length; i++){
            System.out.print(marks[i] + " ");
        }
        
    }
}
