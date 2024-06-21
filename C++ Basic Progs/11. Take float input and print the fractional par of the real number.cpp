#include<iostream>
using namespace std;
int main() {
	float num;
	cout << "Enter the float value: ";
	cin >> num;
	
	int x = num;
	float fraction = num - x;
	cout << "\nThe fractional part of "<< num <<" is :\n"<< fraction;
}
