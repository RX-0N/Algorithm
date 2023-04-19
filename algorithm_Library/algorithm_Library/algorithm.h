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
		//[selection_sort : �ּ�]
		// �̰�����(������Ͽ���) �Լ��� �ۼ��ϸ� ���尡 �����ϰ� �������� �����̵�����
		// cpp ���Ͽ��� ������ �Լ��� �����ϸ� LNK2019 ������ �߻��ϰ� ���带 �����Ѵ�. 
		// ���� �̰Ϳ� ���� ������ ã�Ƴ��� ���ߴ�. 

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



