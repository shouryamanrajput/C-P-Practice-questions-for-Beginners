#include<iostream>
#include<unistd.h>
using namespace std;

int main() {                 
                                            // Taking value of radius from user
	int r;
	cout << "Enter the radius :";
	cin >> r;
	                                       //For animation (NOT NECESSARY)
	cout << "\nCalculating";
	for (int i = 0 ; i<3 ; i++)
	{
		sleep(1);
		cout <<".";
		cout << flush;

	}
	                                       // Applying formula
	 float pi = 3.14159265359, area = pi*r*r;
	 cout << "\nRadius of circle :" << area <<endl;
}
