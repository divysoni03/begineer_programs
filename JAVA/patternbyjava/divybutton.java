import javax.swing.*;

public class divybutton {

    public static void main(String[] args) {
        // Create a new button with the text "Divy"
        JButton button = new JButton("Divy");

        // Add the button to a frame
        JFrame frame = new JFrame();
        frame.add(button);


        // Set the frame's size and make it visible
        frame.setSize(300, 300);
        frame.setVisible(true);
    }
}