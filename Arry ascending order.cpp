
	#include <Stdio.h>
	int main(){
	
		int n1 ;
		printf("enter the size of arry : ");
		scanf("%d",&n1);
		
		int arr[n1] , i , j , temp =0  ;
		
		for(i =0 ; i<n1 ; i++){
		scanf("%d",&arr[i]) ;
		
	}
	
		for(i =0 ; i<n1 ; i++){
		for(j=i+1 ; j<n1 ; j++){
			
		if(arr[i] < arr[j]){
				
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp  ;
	}
	}}
	      	for(i =0 ; i<n1 ; i++){
			printf("%d ",arr[i]) ;
	}
			return 0 ;
		
		}
		  
		
	      
	
		
		
		
		
	
