  
		#include <stdio.h>
	#include <math.h>

							
	float Simple_interset(int year, int principle_amount, float rateof_interset);
	float Compound_interset(int principle_amount, int finail_amount, int year, float rateof_interset);
	float Total_compound_interset(float ci);
	
  	int main() {
	    int year, principle_amount, finail_amount;
	    float si, ci, c_t, rateof_interset;
	
	    printf("Enter the principle amount: ");
	    scanf("%d", &principle_amount);
	
	    printf("Enter the rate of interest: ");
	    scanf("%f", &rateof_interset);
	
	    printf("Enter the years for simple interest: ");
	    scanf("%d", &year);
	
	    printf("Enter the final amount: ");
	    scanf("%d", &finail_amount);
	
	    si = Simple_interset(year, principle_amount, rateof_interset);
	    printf("The simple interest of year: %f0.1\n", si);
	
	    ci = Compound_interset(principle_amount, finail_amount, year, rateof_interset);
	    printf("The compound interest of 1 year: %0.1f\n", ci);
	
	   c_t = Total_compound_interset(ci);
	    printf("The total compound interest: %0.1f\n", c_t);
	
	    return 0;
	}

		
		float Simple_interset(int year, int principle_amount, float rateof_interset) {
		  float si;
		    si = principle_amount * year * rateof_interset;
	           return si ;
		}
		
		float Compound_interset(int principle_amount, int finail_amount, int year, float rateof_interset) {
		    float ci;
		    ci = principle_amount * (pow((1 + rateof_interset / 100), year) - 1);
		    return ci ;
		}
		
			float Total_compound_interset(float ci) {
		    float c_t;
		    c_t = ci * 5;
	           return c_t ;
	           
		}

