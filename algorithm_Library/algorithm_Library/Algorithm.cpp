#include "Algorithm.h"

Algorithm::Algorithm()
{

}

Algorithm::~Algorithm()
{

}

void Algorithm::Selection_Sort(array _array)
{
	int temp = 0;

	for (auto i in array)
	{
		for (auto j in array)
		{
			if (array[i] > array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}

	for (auto k in _array)
	{
		cout << _array[k] << " " << endl;
	}
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