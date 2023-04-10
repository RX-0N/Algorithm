#include "Algorithm.h"

Algorithm::Algorithm()
{

}

Algorithm::~Algorithm()
{

}

void Algorithm::Binary_search(SearchArray array, int findNum)
{
	int mid = 0;
	int first = 0;
	int last = array.size();

	while (true)
	{
		mid = first + (last - first) / 2;
		
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
	cout << "Find Number : " << findNum << endl; 
	cout << "Where? => Array[" << mid << "]" << endl;
}