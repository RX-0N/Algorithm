#include "Test.h"
#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <iomanip>
#include <map>

using namespace std;

//int main()
//{
//
//}

#define MAX_SIZE 10000
void Test::test_2675()
{
	int testCount;
	int repeatCountArray[] = { 0 };
	string inputStringArray[] = { "" };

	cin >> testCount;

	for (int i = 0; i < testCount; i++)
	{
		int stringRepeatCount;
		string inputString;

		cin >> stringRepeatCount >> inputString;	
		
		repeatCountArray[i] = stringRepeatCount;
		inputStringArray[i] = inputString;
	}

	
}

void Test::test_10809()
{	
	vector<int> alphabet(26, -1);
	string word;		
	unsigned int asciiIndexStart = 97;
	unsigned int asciiIndexEnd = 122;

	cin >> word;	

	for (int i = asciiIndexStart; i <= asciiIndexEnd; i++)
	{
		for (int j = 0; j < word.size(); j++)
		{
			if (i == word[j])
			{
				int index = i - 97;

				if (-1 == alphabet[index])
				{
					alphabet[index] = j;
				}				
			}			
		}	
	}

	for (const auto& i : alphabet)
	{
		cout << i << " ";
	}

// 	vector<int> alpha(26, -1);
// 	string s;
// 	cin >> s;
// 
// 	for (int i = 0; i < s.size(); i++)
// 		if (alpha[s[i] - 'a'] == -1)
// 			alpha[s[i] - 'a'] = i;
// 
// 	for (auto& elem : alpha)
// 		cout << elem << ' ';
// 
// 	return 0;
}

void Test::test_11720()
{
	int count;
	int sum = 0;	

	string stringNumber;	

	cin >> count;

	cin >> stringNumber;

	for (int i = 0; i < stringNumber.size(); i++)
	{
		string temp;
		temp = stringNumber[i];

		sum += stoi(temp);
	}

	cout << sum << endl;
}

void Test::test_11654()
{
	char inputChar;	

	cin >> inputChar;

	int asciil = int(inputChar);
	cout << asciil << endl;
}

void Test::test_9086()
{
	int testCaseCount = 0;
	string word;
	vector<string> wordList;

	cin >> testCaseCount;

	for (int i = 0; i < testCaseCount; i++)
	{
		cin >> word;
		wordList.push_back(word);
	}
	
	for (const auto& s : wordList)
	{
		cout << s[0] << s[s.size() - 1] << endl;
	}
}

void Test::test_2743()
{
	string word;
	int count = 0; 

	cin >> word;

	for (int i = 0; i <= word.size(); i++)
	{
		if (i >= word.size())
			cout << i;
	}		
}

void Test::test_27866()
{
	string word;
	int i = 0;

	cin >> word >> i;

	cout << word[i - 1] << endl;
}

//==========================================================

void Test::test_1546()
{
	int		subjects;	    // 과목 수
	int		score;		    // 개별 점수
	double	maxScore = 0.f; // 점수 최대값
	double	average = 0.f;	// 조작된 평균점수
	
	vector<float> scores;

	cin >> subjects;

	for (int i = 0; i < subjects; i++)
	{
		cin >> score;

		if (maxScore < score)
		{
			maxScore = score;
		}		

		scores.push_back(score);
	}

	for (const auto& i : scores)
	{
		average += ((i / maxScore) * 100);
	}

	average /= subjects;

	cout << setprecision(12);
	cout << average;
}

void Test::test_10811()
{
	int N, M;
	int i, j;
	vector<int> bucket;

	cin >> N >> M;

	for (int i = 1; i <= N; i++)
	{
		bucket.push_back(i);
	}

	for (int x = 0; x < M; x++)
	{
		cin >> i >> j;

		for (j; j > i; j--)
		{
			int swap = bucket[i - 1];
			bucket[i - 1] = bucket[j - 1];
			bucket[j - 1] = swap;
			i++;
		}
	}

	for (const auto& i : bucket)
	{
		cout << i << " " << endl;
	}
}

void Test::test_3052()
{
	int A, B = 42;
	int rest = 0;
	int inputCount = 10;
	int count = 0;

	vector<int> restArray;
	
	for (int i = 0; i < inputCount; i++)
	{
		cin >> A;

		rest = A % B;			
		
		bool insertFlag = false;

		for (int j = 0; j < restArray.size(); j++)
		{			
			if (rest == restArray[j])
			{				
				insertFlag = true;
				break;
			}
		}	

		if (false == insertFlag)
		{
			restArray.push_back(rest);
		}
	}

	cout << restArray.size() << endl;
}

void Test::test_5597()
{
	int student = 30;
	
	vector<int> tempList;

	for (size_t j = 0; j < student; j++)
	{
		tempList.push_back(j + 1);
	}

	for (int i = 0; i < 28; i++)
	{
		int attendance;
		cin >> attendance;

		for (int j = 0; j < tempList.size(); j++)
		{
			if (attendance == tempList[j])
			{
				tempList.erase(tempList.begin() + j);
				break;
			}
		}		
	}
	
	for (const auto& i : tempList)
	{
		cout << i << endl;
	}	
}

void Test::test_10813()
{
	vector<int> basket;

	int N, M;
	int i, j;

	cin >> N >> M;

	for (size_t x = 0; x < N; x++)
	{
		basket.push_back(x + 1);
	}

	for (size_t y = 0; y < M; y++)
	{
		cin >> i >> j;
		
		i -= 1;
		j -= 1;

		int temp = basket[i];
		basket[i] = basket[j];
		basket[j] = temp;
	}

	for (auto& z : basket)
	{
		cout << z << " ";
	}
}

void Test::test_10810()
{
	int N, M;
	int start, end;
	int ballNumber;

	vector<int> basket;

	cin >> N >> M;
	
	for (int i = 0; i < N; i++)
	{
		basket.push_back(0);
	}

	for (int i = 0; i < M; i++)
	{
		cin >> start >> end >> ballNumber;
			
		for (int j = start - 1; j <= end -1; j++)
		{
			basket[j] = ballNumber;
		}		
	}

	for (const auto& i : basket)
	{
		cout << i << " ";
	}
}

void Test::test_2562()
{
	int testArray[9];
	int max = 0, i, index = 0;

	for (i = 0; i < 9; i++)
	{
		cin >> testArray[i];
		if (0 == i)
		{
			max = testArray[i];
		}

		if (max < testArray[i])
		{
			max = testArray[i];
			index = i;
		}
	}

	cout << max << endl;
	cout << index + 1 << endl;
}

void Test::test_10818()
{
	int N;
	int inputNum;
	int minNum;
	int maxNum;

	vector<int> testArray;

	cin >> N; 

	for (int i = 0; i < N; i++)
	{
		cin >> inputNum;
		testArray.push_back(inputNum);

		if (i == 0)
		{
			minNum = testArray.front();
			maxNum = testArray.front();
		}

		if (minNum > testArray[i])
		{
			minNum = testArray[i];
		}

		if (maxNum < testArray[i])
		{
			maxNum = testArray[i];
		}		
	}

	cout << minNum << " " << maxNum;
}

void Test::test_10871()
{
	int N;
	int findNum;
	int inputNum;

	vector<int> resultArray;

	cin >> N >> findNum;

	for (int i = 0; i < N; i++)
	{
		cin >> inputNum;

		if (inputNum < findNum)
		{
			resultArray.push_back(inputNum);
		}
	}

	for (const auto& j : resultArray)
	{
		cout << j << " ";
	}
}

void Test::test_10807()
{
	int N; 
	int inputNum;
	int findNum;

	vector<int> testArray;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> inputNum;

		testArray.push_back(inputNum);
	}

	cin >> findNum;

	int count = 0;
	for (const auto& i : testArray)
	{
		if (i == findNum)
		{
			count++;
		}		
	}

	cout << count;
}

void Test::test_10951()
{
	int A, B;	
	vector<int> sumArray;

	while (true)
	{
		cin >> A >> B;

		if (cin.eof())
		{
			break;
		}

		sumArray.push_back(A + B);			
	}

	for (const auto& i : sumArray)
	{
		cout << i << endl;
	}
}

void Test::test_10952()
{
	int A, B;
	vector<int> sumArray;

	while (true)
	{
		cin >> A >> B;

		if (0 == A && 0 == B)
		{
			break;
		}

		sumArray.push_back(A + B);
	}

	for (const auto& i : sumArray)
	{
		cout << i << endl;
	}
}

void Test::test_2439()
{
	int starCount;

	cin >> starCount;

	if (1 <= starCount && 100 >= starCount)
	{
		for (int i = 0; i < starCount; i++)
		{
			for (int j = starCount - (i + 1); j > 0; j--)
			{
				cout << " ";
			}

			for (int k = 0; k <= i; k++)
			{
				cout << "*";
			}

			cout << endl;
		}
	}
}

void Test::test_15552()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int testCases; 
	int A, B;
	int sum = 0;
	
	vector<int> sumArray; 

	cin >> testCases;	

	if (1000000 >= testCases)
	{
		for (int i = 0; i < testCases; i++)
		{
			cin >> A >> B;

			if ((1000 >= A) && (1000 >= B))
			{
				sum = A + B;
				sumArray.push_back(sum);
			}
			else
			{
				cout << "A and B is too short or long.\n";
			}
		}		
	}
	else
	{
		cout << "test Cases too short or long.\n";
	}

	for (const auto& i : sumArray)
	{
		cout << i << "\n";
	}
}

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