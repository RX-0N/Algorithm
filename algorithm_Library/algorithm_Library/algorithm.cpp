#include "algorithm.h"

algorithm::algorithm()
{

}

algorithm::~algorithm()
{

}

void algorithm::binary_search(SearchArray iArray, int findNum)
{
	int mid = 0;
	int first = 0;
	int last = iArray.size();

	while (true)
	{
		mid = first + (last - first) / 2;

		if (iArray[mid] == findNum)
		{
			break;
		}
		else if (iArray[mid] < findNum)
		{
			first = mid + 1;
		}
		else
		{
			last = mid - 1;
		}
	}

	cout << "[binary_search]" << endl;
	cout << "Find Number : " << findNum << endl;
	cout << "Where? => Array[" << mid << "]" << endl;
}