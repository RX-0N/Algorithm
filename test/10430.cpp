#include <iostream>

using namespace std;

int main(void)
{	
	int a = 0;
	int b = 0;
	int c = 0;
	float result = 0;
	
	cin >> a;
	cin >> b;
	cin >> c;

	result = (a + b) % c;
	cout << result << endl;

	result = ((a % c) + (b % c)) % c;
	cout << result << endl;

	result = (a * b) % c;
	cout << result << endl;

	result = ((a % c) * (b % c)) % c;
	cout << result << endl;
}