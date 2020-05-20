//ASSIGNMENT 2
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
	// variables
	int x = 0;
	double total = 0;
	int min = 111;
	int max= 0;
	double avg = 0.0;
	int count = 0;
	int end = -1;

	// do while loop that as the user for a number between 1 and 100
	 do{
		cout << "Enter an Integer between 1 and 100 (-1 to terminate)" << endl;
		cin >> x;

		// checks if user wants to terminate 
		if (x == -1) {
			break;
		}

		// checks to make sure number is valid
		else if (x < 1 || x > 100) {
			cout << "Invalid integer; must be between 1 and 100." << endl;
		}

		// checks min, max, gets the total for average and the count
		else if(x <= 100 && x >= 1) {
			if (x < min) {
				min = x;
			}
			if (x > max) {
				max = x;
			}
			total += x;
			count++;
		}

		// terminates program
	 } while(x != -1);

	 // calculates average
	 avg = total / count;
	 
	 //displays count, min , max and average
	 cout << "Count  Minimum  Maximum  Average" << endl;
	 cout << count << setw(9) << min << setw(9) << max << setw(9) << avg << endl;

	 return 0;
}