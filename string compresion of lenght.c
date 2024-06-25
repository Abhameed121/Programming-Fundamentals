
	#include <stdio.h>
	int main(){
		
	char str[] = "hameed";
	char ch[] = "Abdulu";
	
	int i , j , len1 =0 , len2 =0 ;
	
	 for( i =0 ; str[i] !='\0'; i++){
	 len1++ ;
   }
       for( j =0 ; ch[j] !='\0'; j++){
       len2++ ;
   }
      if(len1 != len2){
      	printf("string lenght is not equal :");
      	return 1 ;
     }
      else{
      	  for(i=0 ; str[i] !='\0'; i++){
      	  if(str[i] !=  ch[i]){
      	  	printf("not equal:");
      	  	return 1 ;
      	  
      }}
          printf("eqaul :");
    }}
	
		  
      	  	
		  
	 
      
      
       
	
	
		
		
	
