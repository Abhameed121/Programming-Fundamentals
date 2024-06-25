	
	
	
	#include <stdio.h>
	#include <time.h>
	#include <string.h>
	// Function to calculate bill for hours
	float calculateHourlyBill(int hours) {
	float hourlyRate = 100.00; // Change this rate
	return hours * hourlyRate;
	}
	// Function to calculate bill for days
	float calculateDailyBill(int days) {
	float dailyRate = 500.0; // Change this rate as needed
	return days * dailyRate;
	}
	// Function to calculate bill for months
	float calculateMonthlyBill(int months) {
	float monthlyRate = 10000.0; // Change this rate as needed
	float totalBill = months * monthlyRate;
	totalBill *= 0.9; // for discount
	return totalBill;
	}
	
	// Function to get user's choice for vehicle type
	int getVehicleType() {
	int type;
	printf("------------------------------------------------\n");
	printf("\tfor the type of vehicle you want to park\n");
	
	while (1) {
	printf("--------------------------------------------\n");
	printf("Enter 1 for car\n");
	printf("Enter 2 for cycle\n");
	printf("Enter 3 for motorcycle\n");
	
	printf("Enter 4 for bus\n");
	printf("Enter 5 for van\n");
	printf("--------------------------------------------\n");
	printf("\nType of vehicle:");
	scanf("%d", &type);
	if (type >= 1 && type <= 5) {
	break;
	} else {
	printf("Wrong choice, please select a valid option\n");
	}
	}
	return type;
	}
	// Function to get user's choice for parking duration
	int getParkingDurationChoice() {
	int parkingDurationChoice;
	printf("\nSelect your choice for parking :\n");
	while (1) {
	printf("--------------------------------------------\n");
	printf("Enter 1 for hours\n");
	printf("Enter 2 for days\n");
	printf("Enter 3 for months\n");
	printf("--------------------------------------------\n");
	printf("\nPut numberf or above chioces\n");
	scanf("%d", &parkingDurationChoice);
	if (parkingDurationChoice >= 1 && parkingDurationChoice <= 3) {
	break;
	} else {
	printf("Wrong choice, please select a valid option\n");
	}
	}
	return parkingDurationChoice;
	}
	int main() {
	printf("--------------------------------------------------:\n");
	printf("\t Welcome to Parking system \n");
	printf("\n");
	
	int vehicleType = getVehicleType();
	int parkingDurationChoice = getParkingDurationChoice();
	char idCard[20]; // using arry for size
	printf("Enter your ID card information: ");
	scanf("%s", idCard);
	time_t entryTime; // time for entry and exit
	time(&entryTime);
	int hours, days, months; // Declare these variables here
	switch (parkingDurationChoice) {
	case 1:
	printf("Enter the number of hours for parking:");
	scanf("%d", &hours);
	printf("Hours I want to park: %d\n", hours);
	break;
	case 2:
	printf("Enter the number of days for parking:");
	scanf("%d", &days);
	printf("Days I want to park: %d\n", days);
	break;
	case 3:
	printf("Enter the number of months for parking:");
	scanf("%d", &months);
	printf("Months I want to park: %d\n", months);
	break;
	default:
	printf("Wrong choice: please select a valid option\n");
	return 1; // exit with an error code
	}
	printf("=========================================================:\n");
	// recipte from adminstarion
	printf("Your Reciept Sir:\n");
	
	printf("ID Card: %s\n", idCard);
	printf("Vehicle type: %d\n", vehicleType);
	printf("Vehicle entry Time: %s", ctime(&entryTime));
	switch (parkingDurationChoice) {
	// choices for bill calculation
	case 1:
	printf("Total Bill: %.2f\n", calculateHourlyBill(hours)); // bill for hours
	
	break;
	case 2:
	printf("Total Bill: %.2f\n", calculateDailyBill(days)); // bill for days
	break;
	case 3:
	printf("Total Bill with discount: %.2f\n", calculateMonthlyBill(months)); // bill for months
	break;
	}
	printf("==========================================================:\n");
	
	// Loop until a valid ID card is entered during exit
	
	while (1) {
	
	char exitIDCard[20]; // using arry to store the ID card numbers during exit
	printf("Enter your ID card for exit: ");
	scanf("%s", exitIDCard);
	// Check if the exit ID card matches the entry ID card
	int exit_vichle = strcmp(idCard, exitIDCard) == 0;
	// Allow or not exit based on the ID card match
	if (exit_vichle) {
	printf("ID Card mtched vehicle can exit.\n");
	
	break; // Exit the loop if the ID card is correct
	} else {
	printf("IDC ard notmatch. Please enter the correct ID card.\n");
	// Continue the loop if the ID card is not valid
	}
	}
	printf("\n Thank you:\n");
	return 0;
   }
