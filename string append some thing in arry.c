	
	#include <stdio.h>
	void fun(char *, char *);
	int main() {
	    
	    char name[] = "hameed";
	    char add[100];
	
	    printf("Enter the string you want: ");
	    scanf("%s", add);
	
	    fun(name, add);
	
	    printf("The appended array is: %s\n", name);
	    return 0;
	}
	
	void fun(char *s, char *q) {
	   int i;
	    for (i = 0; s[i] != '\0'; i++) {
	}
	    int j = 0;
	    for (; q[j] != '\0'; i++, j++) {
	        s[i] = q[j];
	    }
	
	  
	     s[i] = '\0';
	}

