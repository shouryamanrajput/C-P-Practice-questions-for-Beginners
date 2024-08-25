#include<iostream>
using namespace std;
int main () {
	int n;
	cout << "Enter the number:";
	cin >> n;
	
	// Using if else statement.
	if (n>=0) 
		cout << "Absolute value:" << n;
		
		else if(n<0) 
		cout << "Absolute value:" << n*(-1);
}
