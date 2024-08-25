#include<iostream>
#include<unistd.h>
using namespace std;
int main() {
	float principal,rate,time;
	cout << "Principal :Rs";
	cin >> principal;
	cout << "Rate(%) :";
	cin >> rate;
	cout << "Time (YEARS):";
	cin >> time;
	
	cout << "\nCalculating";
	cout.flush();
	
	for(int i=0 ; i<4 ; i++)
	{
	  sleep(1);                      //To give time inbetween dots apperances..
	  cout << ".";
	  
	  for(int i=0 ; i<4 ; i++)
	{
	  sleep(1);                      //To give time inbetween dots apperances..
	  cout << ".";
	}
	}
	
	float si = (principal*rate*time)/100;
	cout << "\nSimple Interest = " << si << endl;
}
