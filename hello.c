		
		#include <stdio.h>
	
	int main() {
	    int arr[10];
	    int i, found = 0;
	    
	    printf("enter the array elements: ");
	    for(i = 0; i < 10; i++) {
	        scanf("%d", &arr[i]);
	    }
	    
	    printf("the array elements: ");
	    for(i = 0; i < 10; i++) {
	        printf("%d ", arr[i]);
	    }
	    
	    int search;
	    printf("\nenter the element you want to search: ");
	    scanf("%d", &search);
	    
	    for(i = 0; i < 10; i++) {
	        if(arr[i] == search) {
	            found++;
	        }
	    }
	    
	    if(found) {
	        printf("the element %d was found %d times",search , found);
	    } else {
	        printf("element not found");
	    }
	    
	    return 0;
	}

