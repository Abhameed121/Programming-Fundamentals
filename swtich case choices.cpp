	
		#include <stdio.h>
		int main(){
			
			int choice ;
			
			printf("\n\t\t 1: for Fact\t 2: Prime or Not \t 3:odd or Even\t 4: Exit ");
			
			printf("\n\n\t\t enter the choice :");
			scanf("%d",&choice);
		
			
			switch(choice){
			
			case 1 :{
				
				int num , fact = 1 , i ;
				printf("\n\n\t\tenter the number ");
				scanf("%d",&num);
				
				for( i=1 ; i<=num ; i++){
					fact = fact * i ;
				}
				  printf("\n\n\t\tthe num is %d of fact is :%d",num,fact);
				
				break ;
		}
			case 2 :{
		
			int num , i ;
				printf("\n\n\t\tenter the number :");
				scanf("%d",&num);
				
				i = 2 ;
			for( i = 2 ; i<=num-1 ; i++){
				if( num % i ==0){
					printf("\n\n\t\tNot prime :");
			} }
			    if(i==num){
			    		printf("\n\n\t\tPrime number");
			}
			       break ;
		}
			case 3 :{
				
				int num ;
				printf("\n\n\t\tenter the number :");
				scanf("%d",&num);
			if(num%2==0){
				printf("\n\n\t\tEven number :");
		}
		      else{
		      	 printf("\n\n\t\todd number :");
		}
		            break ;
	}
			case 4 :
			
				printf("\n\n\t\tExit from programm :");
				break ;
		
			default :
				    printf("\n\n\t\tWrong choice :");
		}
		       printf("\n\n");
		       return 0 ;
		 }
				
			
			       
		
				
				
				
				
				
				
		     
