import java.util.*;
public class Main {
  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    int time = in.nextInt();
    int tasks = in.nextInt();
    int total = 0;
    int [] max = new int [tasks];
    for (int i = 0; i<tasks; i++){
      max [i] = in.nextInt();
    }
    for (int j = 0; j<tasks; j++){
      max[j] = max[j] *-1;
    }
    Arrays.sort(max);
    for (int k=0; k<tasks; k++){
      max[k] = max[k] *-1;
    }
    Arrays.sort(max);
    for (int b = 0; b<tasks; b++){
      if (time - max[b]>=0){
        total++;
        time = time-max[b];
      }else
      break;
    }
    System.out.println(total);
  }
}
