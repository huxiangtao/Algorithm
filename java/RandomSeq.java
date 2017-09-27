public class RandomSeq {
	public static void main(String[] args) {
		int N = 0;
		double sum = 0.0;
		while(!StdIn.isEmpty()) {
			sum += StdIn.readDouble();
			N++;
		}
		double avg = sum / N;
		StdOut.printf("Average is %.4f\n",avg);
	}
}
