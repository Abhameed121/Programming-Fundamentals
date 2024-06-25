	
	
	#include <stdio.h>
	
	int main() {
	    
	    char input;                    // input for the game starat are not 
	    
	    printf("enter 'y' to start the locker game: ");
	    scanf(" %c", &input);
	    
	    int n ;
	    printf("enter the lockers :");
	    scanf("%d",&n);
	     
	    int lockers[n] ;
	    int stud  , lock ; 
	
	
	    if (input == 'y' || input == 'Y') {
	        
	        for (stud = 0; stud < n; stud++){
	        for (lock = stud; lock < n ; lock += stud+ 1) {
	            lockers[lock] = !lockers[lock];
	}
      }
	        int openLock = 0, closedLock = 0 , i , j ;
	        for ( i = 0; i < n ; i++) {
	            if (lockers[i]) {
	                openLock++;
	            } else {
	                closedLock++;
	      }}
	
		  printf("after the game:\n");
	        printf("open lockers: %d\n", openLock);
	        printf("closed lockers: %d\n", closedLock);
	       
		  printf("\nopen lockers: ");
	        for (i = 0; i < n; i++) {
	            if (lockers[i]) {
	                printf("%d ", i + 1);
	            }
	        }
	        printf("\nclosed lockers: ");
	        for (i = 0; i < n ; i++) {
	        if (!lockers[i]) {
	            printf("%d ", i + 1);
	            
		}}
	        printf("\n");
	    } 
	       else {
	             printf("not started.\n");
	    }
	
	    return 0;
	}
