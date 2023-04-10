#include <iostream>
#include "Algorithm.h"
using namespace std;

int main(int argc, char const* argv[])
{
	SearchArray array = { 1, 3, 5, 7, 9, 11, 13, 17, 19, 23 };

	Algorithm myAlgorithm;

	int findNum;

	cin >> findNum;

	myAlgorithm.Binary_search(array, findNum);

	return 0;
}