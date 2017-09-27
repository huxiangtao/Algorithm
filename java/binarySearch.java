import java.util.Arrays;

public class binarySearch { 

	public static int rank(int key,int[] arr) {
		return rank(key,arr,0,arr.length - 1);
	}

	public static int rank(int key,int[] arr,int lo, int hi) {
		if(lo > hi) return -1;

		int middle = lo + (hi - lo) / 2;

		if(key > arr[middle]) {
			lo = middle;
			return rank(key,arr,lo,hi);
		} else if(key < arr[middle]) {
			hi = middle;
			return rank(key,arr,lo,hi);
		} else {
			return middle;
		}	
	}

	public static void main(String[] args) {
		int[] whitelist = In.readInts(args[0]);
		Arrays.sort(whitelist);
		
		while(!StdIn.isEmpty()) {
				int Key = StdIn.readInt();
				if(rank(Key,whitelist) < 0) {
					StdOut.println(Key);				
				}
		}
	}
}

