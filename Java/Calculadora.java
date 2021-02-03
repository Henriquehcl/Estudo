/**
 * 
 */
package fundamentos;
import java.util.Scanner;

/**
 * @author henriquecorreadelima
 *
 */
public class Calculadora {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Scanner digitar = new Scanner(System.in);
		System.out.print("Digite o primeiro número.");
		double num1 = digitar.nextDouble();
		
		System.out.print("Digite o segundo número.");
		double num2 = digitar.nextDouble();
		
		System.out.print("Digite qual operador deseja usar, + , - , / ou *");
		var operador = digitar.next();
		
		//System.out.print("Os número são " + num2 + num1);
		
		if("+".equals(operador)) {
			var resultadoSoma = num1 +num2;
			System.out.print("A soma é: " + resultadoSoma);
		} else if ("-".equals(operador)){
			var resultadoSubtracao = num1 - num2;
			System.out.print("A Subtração é: " + resultadoSubtracao);
		} else if ("/".equals(operador)) {
			var resultadoDivisao = num1 / num2;
			System.out.print("A divisão é: " + resultadoDivisao);
		} else if ("*".equals(operador)) {
			var resultadoMultiplicacao = num1 * num2;
			System.out.print("A Multiplicação é: " + resultadoMultiplicacao);
		}else {
			System.out.print("Valor informador é inválido!");
		}
		
		digitar.close();

	}

}
