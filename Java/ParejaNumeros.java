package MiCodigo;

public class ParejaNumeros {
	//Aqui van los atributos
	double num1;
	double num2;
	
	//El constructor
	public ParejaNumeros(double num1, double num2){
		this.num1=num1;
		this.num2=num2;
	}
	//Metodos getters and setters
	/**
	 * @return the num1
	 */
	public double getNum1() {
		return num1;
	}
	/**
	 * @param num1 the num1 to set
	 */
	public void setNum1(double num1) {
		this.num1 = num1;
	}
	/**
	 * @return the num2
	 */
	public double getNum2() {
		return num2;
	}
	/**
	 * @param num2 the num2 to set
	 */
	public void setNum2(double num2) {
		this.num2 = num2;
	}
	//Resto de metodos
	public double devuelveSuma(){
		double suma;
		suma=num1+num2;
		return (suma);	
	}
	public double devuelveResta(){
		return (num1-num2);
		
	}
	public double devuelveMultiplicacion() {
		return (num1*num2);
	}
	public double devuelveDivision() {
		double division;
		division=num1/num2;
		return(division);
	}
	

}