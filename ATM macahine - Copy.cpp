
	#include <stdio.h>

	int main() {
   	
	int pin = 1234;
    
    	int entered_pin, choice, balance = 1000;

    do {
        printf("enter the pin: ");
        scanf("%d", &entered_pin);

        if (entered_pin != pin) {
          printf("\nwrong pin . please try again.\n\n");
      } 
	  else {
           
            break; 								// exit the loop if pin is correct
        }}
           
	     
	while (1);                                                 // infinite loop until correct pin is enter

    do {
        printf("\n1. check Balance");
        printf("\n2. withdraw Cash");
        printf("\n3. deposit Cash");
        printf("\n4. exit Program\n");

        printf("\nselect an option: ");
        scanf("%d", &choice);

        switch (choice) {                                 // switch case for select options 
      case 1:
                printf("\nYour current balance: %d\n", balance);
                break;
      case 2:
            
            int withdraw;
            
		printf("\nenter the amount to withdraw: ");
            scanf("%d", &withdraw);
                   
	      if (withdraw <= balance) {
          
	      balance =  balance - withdraw;
                       
	      printf("\nCash successfully withdrawn.\n");
      } 
	      else {
            printf("\nInsufficient balance.\n");
      }
          printf("\nyour current balance is :%d",balance);
	    printf("\n\n");
	    	
	     break;
            
	case 3:
                
            int deposite ;
           
	      printf("\nenter the amount to deposit: ");
            scanf("%d", &deposite);
          
	      balance = balance +  deposite;
           
	      printf("\ncashash succfully deposited.\n");
            printf("\nyour current balance is :%d",balance);
            printf("\n\n");
            
		break;
           
	 case 4:
            printf("\nexit  program.\n");
            break;
           
	 default:
             printf("\nInvalid option. Please try again.\n");
      }}
   
    		while (choice != 4);                                         

    		return 0;
	}

