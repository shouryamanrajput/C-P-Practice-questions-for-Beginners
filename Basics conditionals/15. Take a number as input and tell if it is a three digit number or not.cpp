#include<iostream>
using namespace std;
int main() {
	int n;
	cout << "Enter the number: ";
	cin >> n;
	
	if (n>99 && n<1000) {
		cout << n << ": is a three digit number";
	}
	else {
		cout << "Not a three digit number";
	}
}
