//  Take +ve integer input and tell if it is divisible by 5 or 3 but not divisible by 15.
#include<iostream>
using namespace std;

int main() {
	
	int num;
	cout << "Enter the number :";
	cin >> num; 
	
	if (num % 5 == 0 || num % 3 == 0)
	{
		if(num % 15 != 0)
		{
			cout << num << " divisible by 5 or 3 but not divisible by 15";
		}
		else if(num % 15 == 0){
			cout << num << " divisible by 5 or 3 but also divisible by 15";
		}
	}
	else {
		cout << num << " is not divisible by either 5 or 3";
	}
}
