
	#include <stdio.h>
	int main(){
		
		int quantity , total_price , add ;
		
		printf("enter the quantity of burger you want:");
		scanf("%d",&quantity);
		
		char ch;
   		 printf("\nEnter the character for something to add or not ('y', 'Y' or 'N', 'n'): ");
   		 scanf(" %c", &ch);
		
		if(ch == 'Y' || ch == 'y' ){
			printf("\nAdd the cold drink and fires price :");
			scanf("%d",&add);
		
		total_price =  quantity * 500 + add ;
		printf("\nthe total bill  is :%d ",total_price);
	}
	      else if(ch == 'N' || ch == 'n'){
	      	total_price = quantity * 500;
	      	printf("\nthe total price is :%d ",total_price);
	}
	        else {
	        	printf("\nInvalied option");
		  }
		}
	
	
	
