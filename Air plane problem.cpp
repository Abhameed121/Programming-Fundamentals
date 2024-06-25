	
	#include <stdio.h>
	#include <ctype.h>
	#include <string.h>
	
	void getData(char *ticketType, int *row, char *column);
	void printForm(char form[][6], int row, char column);
	
	int main() {
	    char ch, ticketType, column;
	    int row;
	    char form[13][6];
	
	    printf("This program assigns seats for a plane.\n");
	    printf("Do you want to start now? Y/y for yes, N/n for no.\n");
	    scanf(" %c", &ch);
	
	    ch = toupper(ch);
	    while (ch == 'Y') {
	        getData(&ticketType, &row, &column);
	        printForm(form, row, column);
	
	        printf("Do you want to start now? Y/y for yes, N/n for no.\n");
	        scanf(" %c", &ch);
	        ch = toupper(ch);
	        if (ch == 'N')
	            return 0;
	    }
	    return 0;
	}
	
	void getData(char *ticketType, int *row, char *column) {
	    printf("The airplane has 13 rows, with six seats in each row.\n");
	    printf("Enter ticket type,\n");
	    printf("F for first class,\n");
	    printf("B for business class,\n");
	    printf("E for economy class:\n");
	
	    scanf(" %c", ticketType);
	    *ticketType = toupper(*ticketType);
	    while (*ticketType != 'F' && *ticketType != 'B' && *ticketType != 'E') {
	        printf("Invalid ticket type.\n");
	        printf("Enter ticket type,\n");
	        printf("F/f for first class,\n");
	        printf("B/b for business class,\n");
	        printf("E/e for economy class:\n");
	        scanf(" %c", ticketType);
	        *ticketType = toupper(*ticketType);
	    }
	
	    printf("Enter the row number you want to sit:\n");
	    scanf("%d", row);
	
	    printf("Enter the seat number (from A to F):\n");
	    scanf(" %c", column);
	    *column = toupper(*column);
	}
	
	void printForm(char form[][6], int row, char column) {
	    int i, j;
	
	    printf("* indicates that the seat is available;\n");
	    printf("X indicates that the seat is occupied.\n");
	    printf("%-12s%-6s%-6s%-6s%-6s%-6s\n", "A", "B", "C", "D", "E", "F");
	
	    for (i = 0; i < 13; i++) {
	        printf("Row %-2d", i + 1);
	        for (j = 0; j < 6; j++) {
	            if (i == row - 1 && j == column - 'A')
	                printf("%-6c", 'X');
	            else
	                printf("%-6c", '*');
	        }
	        printf("\n");
	    }
	}

