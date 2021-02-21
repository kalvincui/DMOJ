package cccpractice;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;
import java.util.StringTokenizer;

public class CCC2020S1 {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(br.readLine());
		HashMap <Integer, Integer> speed = new HashMap <Integer,Integer>();
		int [] time = new int [n];
		for (int i = 0; i<n; i++) {
			StringTokenizer st = new StringTokenizer (br.readLine());
			time[i] = Integer.parseInt(st.nextToken());
			speed.put(time[i], Integer.parseInt(st.nextToken()));
		}
		Arrays.sort(time);
		double max=0;
		int speeddif;
		int timedif;
		for (int i = 0; i<n-1; i++) {
			speeddif = Math.abs(speed.get(time[i+1]) - speed.get(time[i]));
			timedif = time[i+1] - time[i];
			if (speeddif/timedif > max) {
				max = speeddif*1.0/timedif;
			}
		}
		System.out.println(max);
	}
}
