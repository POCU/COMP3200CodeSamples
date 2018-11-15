#include <iostream>
#include <set>
#include <unordered_set>
#include <chrono>
#include "SpeedTestExample.h"

using namespace std;

namespace samples
{
	void SpeedTestExample()
	{
		// initialize test
		set<int> orderedSet;
		unordered_set<int> unorderedSet;

		const int NUMBER_TO_INSERT = 1023;
		const int MAX_NUMBER_IN_SET = 100000;

		unorderedSet.reserve(MAX_NUMBER_IN_SET);

		static_assert(MAX_NUMBER_IN_SET > NUMBER_TO_INSERT, "MAX_NUMBER_IN_SET should be greater than NUMBER_TO_INSERT");

		for (int i = 0; i < MAX_NUMBER_IN_SET; i++)
		{
			if (i == NUMBER_TO_INSERT)
			{
				continue;
			}

			orderedSet.insert(i);
			unorderedSet.insert(i);
		}

		auto t1Start = chrono::high_resolution_clock::now();

		orderedSet.insert(NUMBER_TO_INSERT);

		auto t1End = chrono::high_resolution_clock::now();

		auto elapsedNanoSeconds1 = t1End - t1Start;

		cout << "Inserting into orderedSet: " << elapsedNanoSeconds1.count() << " ns" << endl;

		auto t2Start = chrono::high_resolution_clock::now();

		unorderedSet.insert(NUMBER_TO_INSERT);

		auto t2End = chrono::high_resolution_clock::now();

		auto elapsedNanoSeconds2 = t2End - t2Start;

		cout << "Inserting into unorderedSet: " << elapsedNanoSeconds2.count() << " ns" << endl;
	}
}