import java.awt.*;
import java.awt.Color;
public class javabutton{
    
    public static void main(String[] args) {
    Frame f1=new Frame();
       Button b1= new Button("divy");
      b1.setBounds(100, 100, 100, 100);
      f1.add(b1);
      f1.setSize(200,200);
      f1.setVisible(true);
      f1.setBackground(Color.BLACK);

    }
}
