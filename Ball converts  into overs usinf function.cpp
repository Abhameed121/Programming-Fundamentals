
	#include <stdio.h>
	
	float fun( int ball ) ;          // fun deleration
	
	int main(){
		
		int ball ;
		float result  ;
		
		printf("enter the  total balls : ");
		scanf("%d",&ball);
		
	 	result  = fun(ball);                       // fun calling 
	 	printf(" total over(%d) = %0.1f",ball ,result);
	 	
		 int overs = result; 
	       int balls = (result - overs) * 6;
	
	     printf("\n# %d overs and %d balls bowled by the bowler\n", overs, balls);
	
	    return 0;
}
	
	     float fun(int ball){          //  function decleraing 
	
		float a ;
	
		a = ball / 6.0 ;
		return  a  ; 
	}
	     
	      
	
	     
