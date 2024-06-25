
	#include <stdio.h>

     int main() {
     
     int i , j  , size = 7 ;
    
     int arr[] = {2, 5, 7, 5, 8, 9, 5}  ; 
     int target = 9;

     printf("the target (%d):\n", target);
     int found = 0; 
     for (i = 0; i < size; i++) {
     for (j = i + 1; j < size; j++) {
     if (arr[i] + arr[j] == target) {
     printf("(%d,%d) ", i, j);
     found = 1; 
  }
  }}
	if (!found) 
      printf("not found target.");
      
	return 0;
}

