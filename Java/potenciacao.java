package fundamentos;

public class potenciacao {

	public static void main(String[] args) {
		
		
		//[6*(3+2)]²
		
		int d = 3+2;
		int e = 6 * d;
		int f = (int) Math.pow(e, 2);
		int g = 3 * 2;
		int h = f/g;
		
		int i = 1 - 5;
		int j = 2 - 7;
		int k = i * j;
		int l = k / 2;
		int m = (int) Math.pow(l, 2);
		
		int n = h - m;
		
		int o = (int)Math.pow(n, 3);
		int p = (int)Math.pow(10, 3);
		int q = o / p;
		
		int a = 3 * 4 - 10;
		//calcular potenciação, vai retornar um valor double
		double b = Math.pow(a, 3);
		//calcular potenciação, vai retornar um valor inteiro
		int c= (int) Math.pow(a, 3);
		
		System.out.println(b);
		System.out.println(c);
		System.out.println(h);
		System.out.println(q);
		
				
	}
}
