#include<iostream>
#include<unistd.h>
using namespace std;
int main() {
	
	float cp,sp;
	cout << "Enter COST PRICE of item : RS ";
	cin >> cp; 
	
	cout << "Enter SELLING PRICE of item : RS "; 
	cin >> sp;
	 
	 cout << "\nCalculating" << endl;
	 sleep(1);
	 
	if ( cp<0 || sp<0 )  
		cout << "INVALID INPUT";
	 
	else if (cp<sp) 
		cout << "Incurred PROFIT of RS " << sp-cp <<endl;
	else if (cp>sp)  
		cout << "Incurred Loss of RS " << cp - sp << endl;
	else if (cp==sp)
		cout << "NO PROFIT NO LOSS";
	 
}
