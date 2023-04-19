#include <iostream>
#include <array>
#include <vector>

using namespace std;

typedef vector<int> SearchArray;

class algorithm
{
public :
	algorithm();
	~algorithm();	
	
	template <size_t N>
	void selection_sort(array<int, N>& iArray)
	{
		//[selection_sort : 주석]
		// 이곳에서(헤더파일에서) 함수를 작성하면 빌드가 성공하고 정상적인 구동이되지만
		// cpp 파일에서 동일한 함수를 구성하면 LNK2019 오류가 발생하고 빌드를 실패한다. 
		// 아직 이것에 대한 원인은 찾아내지 못했다. 

		int temp = 0;
		int min = 0;
		int minIndex = 0;

		for (int i = 0; i < iArray.size(); i++)
		{
			minIndex = i;

			for (int j = i + 1; j < iArray.size(); j++)
			{
				if (iArray[minIndex] > iArray[j])
				{
					minIndex = j;
				}
			}

			temp = iArray[i];
			iArray[i] = iArray[minIndex];
			iArray[minIndex] = temp;
		}

		cout << "[selection_sort]" << endl;
		cout << "Result : ";

		for (int k = 0; k < iArray.size(); k++)
		{
			cout << iArray[k] << " ";
		}

		cout << endl;
	}	
	
	void binary_search(SearchArray iArray, int findNum);
};



