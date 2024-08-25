#include<iostream>
using namespace std;
int main() {
	cout << "CONVERSION OF int to float & float to int";
	int n;
	cout << "\n\nEnter the Integer Value: ";
	cin >> n;
	
	cout << endl << n << " float value is: " << static_cast<float>(n);
	
	
}
