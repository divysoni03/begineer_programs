import java.util.*;

public class starpattern {
        public static void main(String[] args) {
            try (Scanner sc = new Scanner(System.in)) {
                System.out.print("Enter How Many Times You wanna print star : ");
                int star = sc.nextInt();

                for(int line = 0;line<=star;line++){//for 1 line loop star loop will run star1<=line times
                    for(int star1 = 0;star1 <=line;star1++){
                        System.out.print("* ");
                    }
                    System.out.println();
                }
            }
        }   
}
