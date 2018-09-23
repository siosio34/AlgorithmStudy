 
import java.util.Scanner;
import java.math.BigInteger;
public class Main {
	
	public static void main(String []args) {
		
		int n;
		BigInteger arr[] = new BigInteger[251];
		arr[0] = BigInteger.valueOf(1);
		arr[1] = BigInteger.valueOf(1);
		arr[2] = BigInteger.valueOf(3);
		
		for(int i = 3 ; i <= 250 ; i++) {
			arr[i] = arr[i-1].add(arr[i-2].add(arr[i-2]));
		}
								  
		Scanner input = new Scanner(System.in);
								  
		while(input.hasNextInt()) {
			int temp;
			temp = input.nextInt();
			System.out.println(arr[temp]);
		}
	}
}