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
		// RUN THIS EXAMPLE IN RELEASE CONFIG

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

		auto start = chrono::high_resolution_clock::now();

		orderedSet.insert(NUMBER_TO_INSERT);

		auto end = chrono::high_resolution_clock::now();

		auto elapsedNanoSeconds = end - start;

		cout << "Inserting into orderedSet: " << elapsedNanoSeconds.count() << " ns" << endl;

		start = chrono::high_resolution_clock::now();

		unorderedSet.insert(NUMBER_TO_INSERT);

		end = chrono::high_resolution_clock::now();

		elapsedNanoSeconds = end - start;

		cout << "Inserting into unorderedSet: " << elapsedNanoSeconds.count() << " ns" << endl;

		// Uncomment this when you run it with Release configuration
		// system("pause"); 
	}
}