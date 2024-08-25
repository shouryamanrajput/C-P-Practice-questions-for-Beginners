#include<iostream>
using namespace std;
int main() {
	int s1,s2,s3;
		cout << "Side a:";
	cin >> s1;
		cout << "Side b:";
	cin >> s2;
		cout << "Side c:";
	cin >> s3;
	
	if ((s1+s2)>s3 && (s2+s3)>s1 && (s3+s1)>s2)
	{
		cout << "They form a triangle";
	}
	else {
		cout << "INVALID input";
	}
}
