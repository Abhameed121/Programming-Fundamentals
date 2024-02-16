	
		#include <stdio.h>
	
	float percentage(float sub1, float sub2, float sub3, float sub4, float sub5);      // function declaration
	
	float GPA(float result1);                                       // function declaration for GPA
	
	int main() {
	    float sub1, sub2, sub3, sub4, sub5;
	    float result1, result2;
	
	    printf("Enter the five subject marks: ");
	    scanf("%f %f %f %f %f", &sub1, &sub2, &sub3, &sub4, &sub5);
	
	    result1 = percentage(sub1, sub2, sub3, sub4, sub5);                     // function calling percentage
	    printf("The percentage is: %.2f\n", result1);
	
	    result2 = GPA(result1);                                                   // function calling GPA         
	    printf("The GPA of student is: %.2f\n", result2);
	
	    return 0;
	}
	
	float percentage(float sub1, float sub2, float sub3, float sub4, float sub5) {         // function definition for perc
	    float d;
	    d = (sub1 + sub2 + sub3 + sub4 + sub5) * 100.0 / 500.0;
	    return d;
	}
	
	float GPA(float result1) {                                               // function definition for GPA
	    float y;
	    y = result1 / 100.0 * 4.0;
	
	    return y;
	}

