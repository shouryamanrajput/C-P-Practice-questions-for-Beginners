#include<iostream>
using namespace std;
int main() {
	 float s1,s2,s3,s4,s5;
	 float p1,p2,p3,p4,p5;
	                                       // Counting marks outoff
	 float outoff;
	 cout << "Total Marks: ";
	 cin >> outoff;
	                                        // Taking Marks.
	 cout << "\nMarks in S1 :";
	 cin >> s1;
	 cout << "Marks in S2 :";
	 cin >> s2;
	 cout << "Marks in S3 :";
	 cin >> s3;
	 cout << "Marks in S4 :";
	 cin >> s4;
	 cout << "Marks in S5 :";
	 cin >> s5;
	 
	 cout << endl;
	                                // Calculating Percentage of individual subject 
	                                
	                                
	  p1 = (s1/outoff)*100;                              
	  p2 = (s2/outoff)*100;                              
	  p3 = (s3/outoff)*100;
	  p4 = (s4/outoff)*100;
	  p5 = (s5/outoff)*100;
	  
	                                
	 cout << "Percentage of S1 :"   << p1;
	 cout << "\nPercentage of S2 :" << p2;
	 cout << "\nPercentage of S3 :" << p3;
	 cout << "\nPercentage of S4 :" << p4;
	 cout << "\nPercentage of S5 :" << p5;                   
	                                                     // Calculating Overall Percentage.
	 
	 float percentage = (p1+p2+p3+p4+p5) / 5;
	 cout << "\n\nFinal Percenatge: " << percentage << endl;    
	 
}
