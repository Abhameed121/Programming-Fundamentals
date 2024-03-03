
		#include <stdio.h>
		
		int main(){
		
	 	
			 int size1 , size2 , average  , i , j  , sum =0  ;
	 		
			 float avg1 = 0 , avg2 = 0 , avg3 =0 , avg4 =0 , avg5 =0 , avg =0  ;
	 		 
			 float stu_avg1 = 0 , stu_avg2 =0 , stu_avg3 =0 ,stu_avg4 =0 ,stu_avg5 =0 ;
	 		
	 		printf("\nenter the number of students :");
			 scanf("%d",&size1);
			 printf("enter the number of quizes : ");
			 scanf("%d",&size2);
	 		
			 int students[size1] , marks[size2];
			 
			 
		for( i = 0 ; i<size1 ; i++){
			printf("enter the score of  %d student:",i+1);
			scanf("%d",&students[i] );
			
		
		for( j =0 ; j<size2 ; j++){
			scanf("%d",&marks[j]);
			
			if(marks[j]==1){
			sum = sum + marks[j];
			avg1 = sum / 5 ;
	}
	      else if(marks[j]==2){
			sum = sum + marks[j];
			avg2 = sum / 5 ;
	}
	      else if(marks[j]==3){
			sum = sum + marks[i];
			avg3 = sum / 5 ;
	}
	      else if(marks[j]==4){
			sum = sum + marks[j];
			avg4 = sum / 5 ;
	}
	   else{
			sum = sum + marks[j];
			avg5 = sum / 5 ;
	}    }}
	 	
		 	for( i = 0 ; i<size1 ; i++){
		 	for( j =0 ; j<size2 ; j++){
		 	
			 if (students[i]==1){
	           	sum = avg1 + avg2 + avg3 + avg4 + avg5  ;
	           	 stu_avg1 = sum / 25  ;
		}
	          else if (students[i]==2){
	           	sum = avg1 + avg2 + avg3 + avg4 + avg5  ;
	          	stu_avg2 = sum / 25 ;
	}
	      else if (students[i]==3){
	           	sum = avg1 + avg2 + avg3 + avg4 + avg5  ;
	           	stu_avg3 = sum / 25 ;
	}
	      else if (students[i]==1){
	           	sum = avg1 + avg2 + avg3 + avg4 + avg5  ;
	           	stu_avg4 = sum / 25 ;
	}
	       else {
	           	
			sum = avg1 + avg2 + avg3 + avg4 + avg5  ;
	           	stu_avg5 = sum / 25 ;
	 	}
	 } } 
	      
	           
	              printf("\nAverage of quize 1 :%f",avg1);
	              printf("\nAverage of quize 2 :%f",avg2);
	              printf("\nAverage of quize 1 :%f",avg3);
	              printf("\nAverage of quize 1 :%f",avg4);
	              printf("\nAverage of quize 1 :%f",avg5);
	 	        
	 	        printf("\nAverage score of student 1 :%f",stu_avg1);
	 	        printf("\nAverage score of student 2 :%f",stu_avg2);
	 	        printf("\nAverage score of student 4 :%f",stu_avg3);
	 	        printf("\nAverage score of student 5 :%f",stu_avg4);
	 	        printf("\nAverage score of student 1 :%f",stu_avg5);
	}
	           	
		     
	       	 
		
	 		
			
	
