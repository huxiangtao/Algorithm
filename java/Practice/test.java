public class test {
	public static void main(String[] args) {
		Object n = true && false || true && true;	
		System.out.println(n);
		System.out.println(getType(n));
	}
	
	public static String getType(Object o) {
		return o.getClass().toString();
	}
}
