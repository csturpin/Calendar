#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

int main()
{
	int month, sday, tot_days;
	char leap_yr;

	int day = 0;
	int i = 0;		//i counts the number of weekday spaces in the calendar

	cout << "\nEnter Number (1-12) for Month: ";
	cin >> month;

	if(month < 1 || month > 12){
		cout << "Invalid Input. Enter a number 1-12.\n\n";
		exit(0);
	}

	//Sets the number of days to be printed on the calendar for this month; there is a similar else if statement for each month
	else if(month == 1){
		cout << "January selected." << endl;
		tot_days = 31;
	}

	else if(month == 2){
		cout << "February selected. Is it a leap year? (Y/N): ";
		cin >> leap_yr;

		if(leap_yr != 'Y' && leap_yr != 'y' && leap_yr != 'N' && leap_yr != 'n'){
			cout << "Invalid Input. Enter Y or N.\n\n";
			exit(0);
		}

		//Number of days printed for February depends on whether user specifies year as leap year or not leap year
		else if(leap_yr == 'Y' || leap_yr == 'y'){
			tot_days = 29;
		}

		else{
			tot_days = 28;
		}
	}

	else if(month == 3){
		cout << "March selected." << endl;
		tot_days = 31;
	}

	else if(month == 4){
		cout << "April selected." << endl;
		tot_days = 30;
	}

	else if(month == 5){
		cout << "May selected." << endl;
		tot_days = 31;
	}

	else if(month == 6){
		cout << "June selected." << endl;
		tot_days = 30;
	}

	else if(month == 7){
		cout << "July selected." << endl;
		tot_days = 31;
	}

	else if(month == 8){
		cout << "August selected." << endl;
		tot_days = 31;
	}

	else if(month == 9){
		cout << "September selected." << endl;
		tot_days = 30;
	}

	else if(month == 10){
		cout << "October selected." << endl;
		tot_days = 31;
	}

	else if(month == 11){
		cout << "November selected." << endl;
		tot_days = 30;
	}

	else if(month == 12){
		cout << "December selected." << endl;
		tot_days = 31;
	}

	cout << "Enter Number (1-7) for Weekday of First Day of Selected Month: ";
	cin >> sday;

	if(sday < 1 || sday > 7){
		cout << "Invalid Input. Enter a number 1-7.\n\n";
		exit(0);
	}

	else{
		cout << "\n\n";
		cout << setw(7) << "Sun" << setw(7) << "Mon" << setw(7) << "Tue" << setw(7) << "Wed" << setw(7) << "Thu" << setw(7) << "Fri" << setw(7) << "Sat" << endl;
		cout << setw(7) << "===" << setw(7) << "===" << setw(7) << "===" << setw(7) << "===" << setw(7) << "===" << setw(7) << "===" << setw(7) << "===" << endl;

		//Increments the day count and space count by one each iteration until the total number of days for the month is reached
		while(day < tot_days){
			day += 1;
			i += 1;

			//Prints a blank space before the starting weekday of the month if the month does not start on Sunday
			while(i < sday){
				cout << setw(7) << "";
				i += 1;
			}

			//Prints a new line after every seven days and continues printing the days starting back at Sunday each week
			if(i % 7 == 1 && i != 1){
				cout << "\n";
			}

			cout << setw(7) << day;

		}

	}

	cout << "\n\n\n\n";


	return 0;

}
