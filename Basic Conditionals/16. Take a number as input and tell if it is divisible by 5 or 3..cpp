#include<iostream>
using namespace std;
int main () {
	int n;
	cout << "Enter the number:";
	cin >> n;
	
	if (n%5==0 && n%3!=0)
	{
		cout << n << " is divisible by 5 but not 3";
	}
	else if (n%5!=0 && n%3==0)
	{
		cout << n << " is divisible by 3 but not 5";
	}
	else if (n%5==0 && n%3==0)
	{
		cout << n << " is divisible by both 5 and 3";
	}
		else if (n%5!=0 && n%3!=0)
	{
		cout << n << " is not divisible by both 5 and 3";
	}
}
