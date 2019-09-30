package SoftwareConstruction;


class MyException extends Exception{
	
}
public class check {
		int d=0;
		int n=10;
		check(){
			
		}
		void denominator()throws MyException{
			if(d==0) {
				throw new MyException();
			}
		}
	
}
