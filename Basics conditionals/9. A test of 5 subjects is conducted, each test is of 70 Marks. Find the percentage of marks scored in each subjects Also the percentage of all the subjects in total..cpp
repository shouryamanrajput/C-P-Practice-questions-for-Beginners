// A test of 5 subjects is conducted, each test is of 70 Marks. Find the percentage of marks scored in each subjects Also the percentage of all the subjects in total.
#include<iostream>
using namespace std;
int main() {
	
	int totalmarks;
	cout<<"Enter Total Marks:";cin>>totalmarks;
	                                 // Taking marks as input from the user
	int s1,s2,s3,s4,s5;
	cout<<"\nMarks scored in s1:";
	cin>>s1;
	cout<<"Marks scored in s2:";
	cin>>s2;
	cout<<"Marks scored in s3:";
	cin>>s3;
	cout<<"Marks scored in s4:";
	cin>>s4;
	cout<<"Marks scored in s5:";
	cin>>s5;
	                                     // Calculating percentage of individual subject
	 float p1 =(static_cast <float>(s1) / totalmarks) * 100;
	 float p2 =(static_cast <float>(s2) / totalmarks) * 100;
	 float p3 =(static_cast <float>(s3) / totalmarks) * 100;
	 float p4 =(static_cast <float>(s4) / totalmarks) * 100;
	 float p5 =(static_cast <float>(s5) / totalmarks) * 100;
	
	cout << "\nPercentage in s1:" << p1 ;
	cout << "\nPercentage in s2:" << p2 ;
	cout << "\nPercentage in s3:" << p3 ;
	cout << "\nPercentage in s4:" << p4 ;
	cout << "\nPercentage in s5:" << p5 ;
	
	                                       // Calculating Total percentage.
   float score = (p1+p2+p3+p4+p5) / 5;
   cout << "\n\nFinal score :" << score;
}
