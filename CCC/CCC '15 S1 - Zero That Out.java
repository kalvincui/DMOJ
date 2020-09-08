import java.util.*;
public class Main {
  public static void main(String[] args) {
    Scanner in = new Scanner (System.in);
    int input = in.nextInt();
    int [] numbers = new int [input];
    int total = 0;
    for (int i = 0; i<input; i++){
      int counter = i;
      numbers [i] = in.nextInt();
      while (numbers[counter] == 0){
        counter--;
        if (numbers[counter]!=0){
          numbers[counter]= 0;
          break;
        }
      }
    }
    for (int j =0; j<input; j++){
      total += numbers[j];
    }
    System.out.println (total);
  }
}
