
	#include <stdio.h>
	
	int main(){
		
		int hours  , i =0  ;
		float bill ;
		
		while(i <10){
			
			printf("\n\t\t\t enter the hours of employe %d:",i=i+1);
			scanf("%d",&hours);
			
			if(hours > 40){
				bill = (hours - 40.0) * 12.0 ;
				printf("\n\t\t\t Over time of :%0.2f",bill);
		}
			else {
				  printf("\n\t\t\t No over time :");
			}		
		}
		      return 0 ;
		}
		
