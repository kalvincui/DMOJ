import java.util.*;
public class Main {
  public static void main(String[] args) {
    Scanner in = new Scanner (System.in);
    int input = 3;
    int total = 91;
    int [] nums = new int [input];
    for (int i =0; i<input; i++){
      nums[i] = in.nextInt();
      if (i % 2 == 0){
        total += 1*nums[i];
      }else {
        total +=3*nums[i];
      }
    }
    System.out.println("The 1-3-sum is " +total);
  }
}
