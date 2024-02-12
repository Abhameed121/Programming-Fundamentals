	
		#include <stdio.h>
		
		#include <math.h>
		int main(){
			
	      time_t tm;
	      time(&tm);
	      
	
		printf("\n\n\t\t***********************************^^^^^^^^^^^^^^^^^^^^^^^^^^*************************");
		printf("\n\n\t\t\t\t\t WELCOME TO KARACHI FAMOUS FURIT SHOP ");
		printf("\n\n\t\t*******************************<<<<<<<<<<<<<<<<<<<<<<<<<<**************************");
		printf("\n\n\t\t\t\t\tDATE and Time :%s", ctime(&tm));
		printf("\n\n\t\t====================================================================================");
		
		printf("\n\n\t\t\t\t\t Todays per kg price list ");
		printf("\n\n\t\t\tGrapes : 200 \tMango : 250 \tOranage : 550 \tApple : 320  ");
		
		printf("\n\n\t\t=======================================================================================");
		
		float  quantity1 , quantity2 , quantity3 , quantity4 ;
		
		printf("\n\n\t\t\t\t\t Enter the quantity of Grapes:\t");
		scanf("%f",&quantity1);
	
		printf("\n\n\t\t\t\t\t Enter the quantity of Mango:\t");
		scanf("%f",&quantity2);
	
		printf("\n\n\t\t\t\t\t Enter the quantity of Orange:\t  ");
		scanf("%f",&quantity3);
		
		printf("\n\n\t\t\t\t\t Enter the quantity of Apple:\t");
	      scanf("%f",&quantity4);
	      
	      printf("\n\n\t\t###########################################################################################");
	      
	      int bill1 , bill2 , bill3 , bill4 , Grand_bill , Received , Remaining   ;
	      
	       bill1 = quantity1 * 200;
	       bill2 = quantity2 * 250;
	       bill3 = quantity3 * 550;
	       bill4 = quantity4 * 320;
	       
	       printf("\n\n\t\t\t\t\t Total Bill");
	       
	       printf("\n\n\\t\t\t\t\t Item \t||\t Quantity \t||\t Total price ");
	      
		 printf("\n\n\t\t\t\tGrapes \t||\t %0.1f \t\t||\t %d",quantity1,bill1);
		 printf("\n\n\t\t\t\tMango \t||\t %0.1f \t\t||\t %d",quantity2,bill2);
		 printf("\n\n\t\t\t\tOrange \t||\t %0.1f \t\t||\t %d",quantity3,bill3);
		 printf("\n\n\t\t\t\tApples \t||\t %0.1f \t\t||\t %d",quantity4,bill4);
	      
	      printf("\n\n\t\t---------------------------------------------------------------------------------------------");
	      
	       Grand_bill = bill1 + bill2 + bill3 + bill4 ;
	       printf("\n\n\t\t\t Grand total \t=======================================\t %d");
	      
	      printf("\n\n\n\t\t\t Recivied \t======================================== ");
	      scanf("%d",&Received);
		
		 Remaining = Received - Grand_bill;
	      
	      printf("\n\n\t\t\t Remaning \t======================================= %d",Remaining);
	      
	      
	             int note1 =  Remaining / 5000;
	             int rem1  =  Remaining % 5000;
	             
	             int note2 = rem1 / 1000;
	             int rem2  = rem1 % 1000;
	             
	             int note3 = rem2 / 100;
	             int rem3  = rem2 % 100;
	             
	             int note4 = rem3 / 50;
	             int rem4  = rem3 % 50;
	             
	             int note5 = rem4 / 20;
	             int rem5  = rem4 % 20;
	             
	             int note6 = rem5 / 10;
	             int rem6  = rem5 % 10;
	             
	             int note7 = rem6 / 5;
	             int rem7  = rem6 % 5;
	             
	             int note8 = rem7 / 2;
	             int rem8  = rem7 % 2;
	             
	             int note9 = rem8 / 1;
	             int rem9  = rem8 % 1;
	             
	             printf("\n\n\t\t\t\t\t\t 5000 NOtes \t=\t%d",note1);
	             printf("\n\n\t\t\t\t\t\t 1000 NOtes \t=\t%d",note2);
	             printf("\n\n\t\t\t\t\t\t 100 NOtes \t=\t%d",note3);
	             printf("\n\n\t\t\t\t\t\t 50 NOtes \t=\t%d",note4);
	             printf("\n\n\t\t\t\t\t\t 20 NOtes \t=\t%d",note5);
	             printf("\n\n\t\t\t\t\t\t 10 NOtes \t=\t%d",note6);
	             printf("\n\n\t\t\t\t\t\t 5 NOtes \t=\t%d",note7);
	             printf("\n\n\t\t\t\t\t\t 2 NOtes \t=\t%d",note8);
	             printf("\n\n\t\t\t\t\t\t 1 NOtes \t=\t%d",note9);
	
	       printf("\n\n");   
	       
	}
	             
	      
	      

		
		
		
		
		
