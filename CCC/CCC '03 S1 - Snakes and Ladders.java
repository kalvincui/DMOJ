public class Main {
  public static void main(String[] args) {
    Scanner in = new Scanner (System.in);
    int square = 1;
    int roll;
    while (square !=100){
      roll = in.nextInt();
      if (roll == 0){
        System.out.println("You Quit!");
        break;
      }
      square+=roll;
      if (square==9){
        square = 34;
      }
      if (square ==40){
        square = 64;
      }
      if (square ==67){
        square = 86;
      }
      if (square ==54){
        square = 19;
      }
      if (square == 90){
        square = 48;
      }
      if (square == 99){
        square = 77;
      }
      if (square>100){
        square = square-roll;
      }
      System.out.println("You are now on square " + square);
    }
    if (square == 100){
      System.out.println ("You Win!");
    }
  }
