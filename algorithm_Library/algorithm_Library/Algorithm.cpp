#include "Algorithm.h"

void Algorithm::Binary_search(SearchArray array, int findNum)
{
	int mid = 0;
	int first = 0;
	int last = 0;

	while (true)
	{


		if (array[mid] == findNum)
		{
			break;
		}
		else if (array[mid] < findNum)
		{
			first = mid + 1;
		}
		else
		{
			last = mid - 1;
		}
	}

	cout << "" << endl;
}