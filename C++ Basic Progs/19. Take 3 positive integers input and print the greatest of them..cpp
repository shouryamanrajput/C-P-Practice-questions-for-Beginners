// Q8. Take 3 positive integers input and print the greatest of them.
#include<iostream> 
using namespace std;

int main() {
	
	int n1,n2,n3;
	cout << "Enter the First Number: ";
	cin >> n1;
	cout << "Enter the Second Number: ";
	cin >> n2;
	cout << "Enter the Third Number: ";
	cin >> n3;
	
	if (n1 == n2 && n2 == n3)                     // When all numbers are same
	{
		cout << "All number are same";
	}
	
	
	
	else if (n1 == n2 && n1 < n3)                 // When first and second are smaller than third 
	{
		cout << n3 << ": is the greatest";
	}  
	
	else if (n1 == n2 && n1 > n3)  {             // When first and second are greater than third 
	cout << n1 << ": is the greatest";
}
                                	
                                	
	else if (n2 == n3 && n2 < n1)                    // When second and third are smaller than first
	{
		cout << n1 << ": is the greatest";
	} 
	
	else if (n2 == n3 && n2 > n1)                    // When second and third are greater than first
	{
		cout << n2 << ": is the greatest";
	}
	
	else if (n1 == n3 && n1 < n2)                  // When first and third are smaller than second
	{
		cout << n2 << ": is the greatest";
	} else if (n1 == n3 && n1 > n2)                  // When first and third are greater than second
	{
		cout << n1 << ": is the greatest";
	}
	
	
	
	else if (n1>n2 && n1>n3)  // First number is greater.
	{
		cout << n1 << ": Is the greatest";
	}
	else if (n2>n1 && n2>n3)  // Second number is greater.
	{
		cout << n2 << ": Is the greatest";
	} 
	else if (n3>n2 && n3>n1)  // Third number is greater.
	{
		cout << n3 << ": Is the greatest";
	}
	
	
}
