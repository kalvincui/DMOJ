import java.util.*;
import java.io.*;
public class Main {
  public static void main(String[] args) throws IOException {
    BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
    int n = Integer.parseInt(in.readLine());
    int lowerbound;
    int upperbound;
    int counter = 0;
    int [] set = new int [n];
    StringTokenizer s = new StringTokenizer(in.readLine());
    if (n%2 != 0){
      lowerbound = (n+1)/2;
      upperbound = (n-1)/2;
    }else{
      lowerbound = n/2;
      upperbound = lowerbound;
    }
    for (int i = 0; i<n; i++){
      set[i] = Integer.parseInt(s.nextToken());
    }
    int [] low = new int [lowerbound];
    int [] high = new int [upperbound];
    Arrays.sort(set);
    for (int i = 0; i<lowerbound; i++){
      low[i] = set[i];
    }
    for (int i = 0; i<upperbound; i++){
      high[i] = set[i+lowerbound];
    }
    for (int i = 0; i<lowerbound; i++){
      low[i] = low[i] * -1;
    }
    Arrays.sort(low);
    for (int i = 0; i<lowerbound; i++){
      low[i] = low[i] *-1;
    }
    while (counter<lowerbound){
      if (lowerbound > upperbound && counter+1 == lowerbound){
        System.out.print(low[counter]);
        break;
      }else
      System.out.print(low[counter] + " " + high[counter] + " ");
      counter++;
    }
  }
}
