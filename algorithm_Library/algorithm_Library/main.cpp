#include <iostream>
#include <vector>
#include <array>
#include "algorithm.h"

using namespace std;

int main()
{
	array<int, 10> array1 = { 5, 1, 3, 6, 7, 10, 11, 2, 4, 20};
	array<int, 5> array2 = { 5, 1, 3, 6, 7 };
	array<int, 3> array3 = { 5, 1, 3 };
	array<int, 2> array4 = { 5, 1 };	

	SearchArray iSearchArray = { 5, 1, 3, 6, 7, 10, 11, 2, 4, 20 };
	
	algorithm* myAlgorithm = new algorithm();

	myAlgorithm->selection_sort(array1);
	cout << endl;
	myAlgorithm->binary_search(iSearchArray, 20);

	return 0;
}

