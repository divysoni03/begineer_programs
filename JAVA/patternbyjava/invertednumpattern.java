public class invertednumpattern {
    public static void main(String[] args) {
        // The number of rows to print
        int rows = 4;
        // The number to start with
        int num = 10;
        // Loop for each row
        for (int i = 0; i < rows; i++) {
            // Loop for each column
            for (int j = 0; j <= i; j++) {
                // Print the number and a space
                System.out.print(num + " ");
                // Decrement the number by one
                num--;
            }
            // Move to the next line
            System.out.println();
        }
    }
}
