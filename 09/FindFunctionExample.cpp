#include <iostream>
#include <vector>
#include "Algorithm.h"
#include "FindFunctionExample.h"

using namespace std;

namespace samples
{
	void FindFunctionExample()
	{
		const int ARRAY_SIZE = 10;
		int arr[ARRAY_SIZE] = { 10, 20, 13, 52, 32, 67, 89, 15, 46,3 };

		const int* ptr = Algorithm::Find(arr, arr + ARRAY_SIZE, 67);
		cout << *ptr;
	}
}