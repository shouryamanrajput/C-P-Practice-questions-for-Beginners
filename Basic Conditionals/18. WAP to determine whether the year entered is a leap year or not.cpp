 // Q7. WAP to determine whether the year entered is a leap year or not.
#include<iostream>
using namespace std;
 
 int main() {
 	int year;
 	cout << "Enter the year: ";
    cin >> year;
    cout << endl;
    
	
   if (year % 400 == 0) {
        cout << year << ": Is a leap year";
    } else if (year % 100 == 0) {
        cout << year << ": Is not a leap year";
    } else if (year % 4 == 0) {
        cout << year << ": Is a leap year";
    } else {
        cout << year << ": Is not a leap year";
    }

 	
 }
