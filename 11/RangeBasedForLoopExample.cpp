#include <vector>
#include <iostream>
#include "RangeBasedForLoopExample.h"

using namespace std;

namespace samples
{
	void RangeBasedForLoopExample()
	{
		vector<int> nums;
		nums.reserve(5);

		nums.push_back(1);
		nums.push_back(2);
		nums.push_back(3);
		nums.push_back(4);
		nums.push_back(5);

		for (int n : nums)
		{
			n++;
		}

		cout << "Print nums:" << endl;

		for (auto it = nums.begin(); it != nums.end(); ++it)
		{
			cout << *it << endl;
		}

		for (int& n : nums)
		{
			n--;
		}

		cout << "Print nums again:" << endl;

		for (auto it = nums.begin(); it != nums.end(); ++it)
		{
			cout << *it << endl;
		}
	}
}