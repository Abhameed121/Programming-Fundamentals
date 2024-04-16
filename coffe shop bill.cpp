
	#include  <stdio.h>
	int main(){
		
			float bill ;   
		
		printf("1for Espresso :");
		printf("\n\n2 for Latte  :");
		printf("\n\n3 for Mocha :");
		printf("\n\n4 for Americano :");
		
		int  select  , quantity ;
		printf("\n\nEnter your selection(1 to 5) :");
		scanf("%d",&select);
		
		switch(select){
		case 1 :
			printf("\nEspresso ");
			break ;
		case 2 :
			printf("\nLate ");
			break ;
		case 3 :
			  printf("\nMocha ");
			  break ;
		case 4:
			 printf("\nAmericano :");
			 break ;
		default:
			  printf("\nI cant take coffe: ") ;
	}
	     	printf("\n\nEnter the quntity:");
		scanf("%d",&quantity);
	      
	      
	      bill = quantity * 3.00 ;
	      
	      printf("\n\nYou have selected %d.that will be $%f,please",select,bill);
	      
	      return  0 ;
				
		}
		
		
	
