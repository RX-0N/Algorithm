#include <iostream>
#include <vector>
#include <array>
//#include "Algorithm.h"

using namespace std;

typedef vector<int> SearchArray;

template <size_t N>
void Selection_sort(array<int, N>& array);
void Binary_search(SearchArray array, int findNum);

int main()
{
	array<int, 10> array1 = { 5, 1, 3, 6, 7, 10, 11, 2, 4, 20 };
	array<int, 5> array2 = { 5, 1, 3, 6, 7 };
	array<int, 3> array3 = { 5, 1, 3 };
	array<int, 2> array4 = { 5, 1 };	
		
	Selection_sort(array1);

	return 0;
}

template <size_t N>
void Selection_sort(array<int, N>& myArray)
{
	int temp = 0;
	int min = 0;
	int minIndex = 0;


	for (int i = 0; i < myArray.size(); i++)
	{
		minIndex = i;

		for (int j = i + 1; j < myArray.size(); j++)
		{
			if (myArray[minIndex] > myArray[j])
			{
				minIndex = j;
			}
		}

		temp = myArray[i];
		myArray[i] = myArray[minIndex];
		myArray[minIndex] = temp;
	}

	for (int k = 0; k < myArray.size(); k++)
	{
		cout << myArray[k] << " ";
	}
}
void Binary_search(SearchArray array, int findNum)
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