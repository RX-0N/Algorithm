#include "Test.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define MAX_SIZE 10000

void Test::test_25314()
{
	int number = 0;
	int share;	
	int byteSize = 4;

	string resultString = "long int";
	string addString = "long ";

	cin >> number;

	share = number / byteSize;

	if (1 < share)
	{
		for (int i = 1; i < share; i++)
		{
			resultString.insert(0, addString);
		}
	}
	
	cout << resultString << endl;
}

void Test::test_25304()
{
	int totalCost;
	int objectCount;
	int a, b;
	int sum = 0;

	cin >> totalCost;

	cin >> objectCount;

	for (int i = 0; i < objectCount; i++)
	{
		cin >> a >> b;

		sum += (a * b);
	}

	if (sum == totalCost)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
}

void Test::test_8393()
{
	int inputNum;
	int sum = 0;

	cin >> inputNum;

	if (1 <= inputNum && MAX_SIZE >= inputNum)
	{
		for (int i = 0; i <= inputNum; i++)
		{
			sum += i;
		}			
	}

	cout << sum << endl;	
}

void Test::test_10950()
{
	int testCaseCount;
	int a, b;

	cin >> testCaseCount;

	vector<int> resultArray;

	for (int i = 0; i < testCaseCount; i++)
	{
		cin >> a >> b;

		if (0 < a && 10 > b)
		{
			resultArray.push_back(a + b);
		}		
	}

	for (const auto &j : resultArray)
	{		
		cout << j << endl;
	}
}

void Test::test_2739()
{
	int target;
	int sum;

	cin >> target;

	if (1 <= target && 9 >= target)
	{
		for (int i = 1; i <= 9; i++)
		{
			sum = target * i;
			cout << target << " * " << i << " = " << sum << endl;
		}
	}
}

void Test::test_2480()
{
	int a, b, c;
	int result = 0;	

	cin >> a >> b >> c;	

	if ((a == b) && (a == c) && (b == c))
	{
		result = a * 1000 + 10000;

		cout << result << endl;
	}
	else if ((a == b) || (a == c) || (b == c))
	{
		if (a == b)
		{
			result = a * 100 + 1000;
		}
		else if (a == c)
		{
			result = a * 100 + 1000;
		}
		else if (b == c)
		{
			result = b * 100 + 1000;
		}
		
		cout << result << endl;
	}
	else if ((a != b) && (b != c) && (a != c))
	{		
		if (a < b || a < c)
		{
			if (b > c)
			{
				result = b * 100;
				cout << result << endl;
			}
			else
			{
				result = c * 100;
				cout << result << endl;
			}
		}
		else
		{
			result = a * 100;
			cout << result << endl;
		}
	}
}

void Test::test_2525()
{
	int A, B;
	int cookingTime;	

	cin >> A >> B;

	cin >> cookingTime;

	if ((0 <= A && 23 >= A) && (0 <= B && 59 >= B))
	{
		B += cookingTime;

		if (B >= 60)
		{
			A = A + B / 60;
			B = B % 60;		

			if (24 <= A)
			{
				A -= 24;
			}
		}
		
		cout << A << " " << B << endl;		
	}
}

void Test::test_2884()
{
	int H = 0, M = 0;
	
	cin >> H >> M;

	if ((0 <= H && 23 >= H) && (0 <= M && 59 >= M))
	{
		M = M - 45;
		
		if (0 > M)
		{
			M = 60 + M;

			H -= 1;		
		}

		if (0 > H)
		{
			H = 23;
		}

		cout << H << " " << M << endl;		
	}	
}

void Test::test_14681()
{
	int x = 0, y = 0;

	cin >> x >> y;

	if ((-10000 <= x && 10000 >= x && 0 != x) && (-10000 <= y && 10000 >= y && 0 != y))
	{		
		if (0 < x && 0 < y)
		{
			cout << "1" << endl;
		}		
		else if (0 > x && 0 < y)
		{
			cout << "2" << endl;
		}		
		else if (0 > x && 0 > y)
		{
			cout << "3" << endl;
		}		
		else if (0 < x && 0 > y)
		{
			cout << "4" << endl;
		}
	}
}

void Test::test_2753()
{
	unsigned int year = 0;

	cin >> year;

	if (1 <= year && 4000 >= year)
	{
		if (year % 400 == 0)
		{
			cout << "1" << endl;
		}
		else if (year % 4 == 0 && year % 100 != 0)
		{
			cout << "1" << endl;
		}
		else
		{
			cout << "0" << endl;
		}
	}
}

void Test::test_9498()
{
	unsigned int score = 0;

	cin >> score;

	if (0 <= score && 100 >= score)
	{
		if (100 >= score && 90 <= score)
		{
			cout << "A" << endl;
		}
		else if (80 <= score && 89 >= score)
		{
			cout << "B" << endl;
		}
		else if (70 <= score && 79 >= score)
		{
			cout << "C" << endl;
		}
		else if(60 <= score && 69 >= score)
		{
			cout << "D" << endl;
		}
		else
		{
			cout << "F" << endl;
		}
	}	
}

void Test::test_1330() 
{
	int A = 0, B = 0;

	cin >> A >> B;

	if ((-10000 <= A && 10000 >= A) && (-10000 <= B && 10000 >= B))
	{	
		if (A > B)
		{
			cout << ">" << endl;
		}
		else if (A < B)
		{
			cout << "<" << endl;
		}
		else
		{
			cout << "==" << endl;
		}	
	}
}

void Test::test_10172()
{
	string dogPrint;

	dogPrint = "|\\_/|\n|q p|   /}\n( 0 )\"\"\"\\\n|\"^\"`    |\n||_/=\\\\__|";

	cout << dogPrint << endl;
}

void Test::test_10171()
{
	string catPrint;

	catPrint = "\\    /\\ \n )  ( ')\n(  /  )\n \\(__)|";

	cout << catPrint << endl;
}

void Test::test_11382()
{
	long long A, B, C;
	long total = 0;

	cin >> A >> B >> C;

	total = A + B + C;

	cout << total << endl;
}

void Test::test_10430()
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

void Test::test_2588()
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
}