import java.util.*;
import java.io.*;
public class Main {
  public static void main(String[] args) throws IOException{
    BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
    String input = in.readLine();
    while (input.equals("quit!")==false){
        if (input.length()>3){
        if (input.charAt(input.length()-3) != 'a' && input.charAt(input.length()-3) != 'e' && input.charAt(input.length()-3) != 'i' && input.charAt(input.length()-3) != 'o' && input.charAt(input.length()-3) != 'u' && input.charAt(input.length()-3) != 'y'){
        if (input.endsWith("or")){
          input = input.substring(0,input.length()-2);
          input += "our";
        }
        }
        }
      System.out.println (input);
      input = in.readLine();
    }
  }
}
