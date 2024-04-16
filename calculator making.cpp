
	#include <stdio.h>
	int main(){
		
		int  num1 ,num2 , result  ;           // decleration of  varibles		
		char ch ;                               // decleration of opraetion 
	 	
	 	printf("enter the num1 :");
	 	scanf("%d",&num1); 
	 	
	 	printf("enter the num2 :");
	 	scanf("%d",&num2);
	 	
	 	printf("enter the opreation :");
	 	scanf(" %c",&ch);
	 	
	 	switch( ch ){                                  // use swtich case 
	
		case '+':                                        // Addition of numbers
	 	result = num1+num2;
		printf("sum of numbers is :%d",result);
		break ;
		
		case '-':                                          // subtraction of numbers
		result = num1-num2;
		printf("subtraction  of numbers is :%d",result);
		break ;	
		
		case '*':                                          // // Multiplication of numbers
		result = num1 * num2;
		printf("Multiplication of numbers is :%d",result);
		break ;
		
		case '/':                                                  // // divion of numbers
		if( num2 !=0)
		
		result = num1 / num2;
		printf("Multiplication of numbers is :%d",result);
		break ;
	 	
	 	default:                                                      // wrong choice
	 		   printf("Wrong opreation :");
	 		   
	 }
	    			return 0 ;
	 	}
