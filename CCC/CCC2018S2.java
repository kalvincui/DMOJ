package cccpractice;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class CCC2018S2 {

	public static void main(String[] args) throws IOException{
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(br.readLine());
		boolean rotatex = false;
		boolean rotatey = false;
		int [][] flower = new int [n+1][n+1];
		for (int i = 1; i<=n; i++) {
			StringTokenizer st = new StringTokenizer (br.readLine());
			for (int j=1; j<=n; j++) {
				flower[i][j] = Integer.parseInt(st.nextToken());
			}
		}
		int checker = flower[1][1];
		for (int i = 1; i<=n; i++) {
			checker = Math.max(checker, flower[1][i]);
			if (checker > flower[1][i]) {
				rotatex = true;
			}
		}
		checker = flower[1][1];
		for (int i=1; i<=n; i++) {
			checker = Math.max(checker,flower[i][1]);
			if (checker>flower[i][1]) {
				rotatey = true;
			}
		}
		if (rotatex == false && rotatey == false) {
			for (int i = 1; i<=n; i++) {
				for (int j =1; j<=n; j++) {
					System.out.print(flower[i][j] + " ");
				}
				System.out.println();
			}
		}
		//Counterclockwise 90 degrees to the left
		if (rotatex==true && rotatey == false) {
			for (int i = n; i>=1; i--) {
				for (int j = 1; j<=n; j++) {
					System.out.print(flower[j][i] + " ");
				}
				System.out.println();
			}
		}
		//Clockwise 90 degrees to the right
		if (rotatex == false && rotatey==true) {
			for (int i =1; i<=n; i++) {
				for (int j=n; j>=1; j--) {
					System.out.print(flower[j][i] + " ");
				}
				System.out.println();
			}
		}
		//180 degrees
		if (rotatex == true && rotatey==true) {
			for (int i=n; i>=1; i--) {
				for (int j=n; j>=1; j--) {
					System.out.print(flower[i][j] + " ");
				}
				System.out.println();
			}
		}
		
	}

}
