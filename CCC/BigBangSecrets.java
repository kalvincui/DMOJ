import java.io.*;
public class BigBangSecrets {
	public static void main(String[] args) throws IOException{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int k = Integer.parseInt(br.readLine());
		String input = br.readLine();
		for (int i = 0; i<input.length(); i++) {
			int shift = 3*(i+1)+k;
			int ascii = (int) input.charAt(i);
			ascii -= shift;
			if (ascii < 65) {
				ascii = 90 - (64 - ascii);
				System.out.print((char)ascii);
			}else {
				System.out.print((char)ascii);
			}
		}
	}
}
