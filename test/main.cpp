#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const* argv[]) {
		
	unsigned int white[6] = { };
	unsigned int black[6] = { 1, 1, 2, 2, 2, 8 };
	int result[7] = { };

	for (int i = 0; i < 6; i++)
	{
		cin >> white[i];	

		if (white[i] < black[i])
		{
			result[i] = black[i] - white[i];
		}
		else if (white[i] > black[i])
		{			
			result[i] =  -1 * (white[i] - black[i]);
		}
		else
		{
			result[i] = 0;
		}
	}	
		
	for (int j = 0; j < 6; j++)
	{
		cout << result[j] << " ";
	}	

	return 0;
}