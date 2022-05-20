#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	string file;

	cout << "Введите название файла :";
	cin >> file;

	ifstream fin(file + ".txt" );

	vector<int> nums;
	int sum = 0;
	int result;
	int count = 0;

	while (!fin.eof())
	{
		int a;
		fin >> a;
		nums.push_back(a);
	}

	sort(nums.begin(), nums.end());

	for (int i = 0; i < nums.size(); i++)
	{
		sum += nums[i];
	}

	result = sum / nums.size();

	for (int i = 0; i < nums.size(); i++)
	{
		while (nums[i] != result)
		{
			if (nums[i] > result)
			{
				nums[i] -= 1;
				count++;
			}

			if (nums[i] < result)
			{
				nums[i] += 1;
				count++;
			}
			
		}
	}

	cout << count;
}


