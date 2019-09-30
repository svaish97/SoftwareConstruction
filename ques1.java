package SoftwareConstruction;

import java.io.IOException;

public class ques1 {
	
public static int sum(int [] a) {
	int sum=0;
	for(int i:a) {
		sum+=i;
	}
	return sum;
}





public static void main(String[] args) throws MyException {
	int [] arr= {2,2,3};
	int sum= sum(arr);
	assert sum>=16 :"false";
	System.out.println(sum);
	check o= new check();
	try {
		o.denominator();
	}
	catch(Exception e) {
		
	}

	
	
	
}
}
