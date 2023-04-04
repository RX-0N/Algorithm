/*
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string stringA = "";
	string stringB = "";

	int resultA = 0;
	int resultB = 0;
	int resultC = 0;
	int sum = 0;

	int onePlace_B = 0;
	int tensPlace_B = 0;
	int hundredPlace_B = 0;

	cin >> stringA;

	cin >> stringB;
		
	onePlace_B = stoi(stringB.substr(2));
	
	int integerA = stoi(stringA);
	resultA = integerA * onePlace_B;

	tensPlace_B = stoi(stringB.substr(1, 1));
	resultB = integerA * tensPlace_B;
		
	hundredPlace_B = stoi(stringB.substr(0, 1));
	resultC = integerA * hundredPlace_B;

	// print result 
	cout << resultA << endl;
	cout << resultB << endl;
	cout << resultC << endl;

	sum = resultA + (resultB * 10) + (resultC * 100);

	cout << sum << endl;

	// stoi	  : string to int 
	// substr : Returns a substring [pos, pos+count)
}*/