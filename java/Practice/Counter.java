public class Counter {
	private String name;
	private int age;
	
	public Counter(String s) {
		name = s;
	}

	public void getName() {
		System.out.println(name);
		System.out.println(age);
	}

	public void getAge() {
		name += "-lala";
		System.out.println(name);		
	}

	public static void main(String[] args) {
		Counter elliot = new Counter("mc");
		elliot.getName();
		elliot.getAge();
	} 
}
