import java.io.*;
import java.util.*;
public class SlotMachines {
  public static void main(String[] args) throws IOException{
    BufferedReader br = new BufferedReader (new InputStreamReader(System.in));
    int quarters = Integer.parseInt(br.readLine());
    int machine1 = Integer.parseInt(br.readLine());
    int machine2 = Integer.parseInt(br.readLine());
    int machine3 = Integer.parseInt(br.readLine());
    int total = 0;
    while (quarters >= 1){
      machine1++;
      quarters--;
      total++;
      if(machine1 == 35){
        quarters +=30;
        machine1 = 0;
      }
      if (quarters == 0){
        break;
      }
      machine2++;
      quarters--;
      total++;
      if (machine2 ==100){
        quarters +=60;
        machine2 = 0;
      }
      if (quarters==0){
        break;
      }
      machine3 ++;
      quarters--;
      total++;
      if (machine3 == 10){
        quarters +=9;
        machine3 = 0;
      }
    }
    System.out.println ("Martha plays " + total + " times before going broke.");
  }
}
