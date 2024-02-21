#include <thread>
#include <iostream>
#include <mutex>
#include <chrono>
#include "MultiThreadingExample.h"

using namespace std;

namespace samples
{
	static mutex sMutex;
	static int sNumber = 10;

	void Multiply(int rhs)
	{
		scoped_lock<mutex> lock(sMutex);
		cout << "Executing Multiply" << endl;
		sNumber *= rhs;
	}

	void SlowAdd(int rhs)
	{
		{
			scoped_lock<mutex> lock(sMutex);
			cout << "Executing SlowAdd" << endl;
		}

		this_thread::sleep_for(chrono::seconds(1));

		{
			scoped_lock<mutex> lock(sMutex);
			cout << "SlowAdd: Adding " << rhs << endl;
			sNumber += rhs;
		}
	}

	void MultiThreadingExample()
	{
		thread childThread1(SlowAdd, 10);
		Multiply(10);

		if (childThread1.joinable())
		{
			{
				scoped_lock<mutex> lock(sMutex);
				cout << "childTread1 is joinable" << endl;
			}
			childThread1.join();
		}

		cout << sNumber << endl;
		sNumber = 10;

		thread childThread2(SlowAdd, 10);

		if (childThread2.joinable())
		{
			{
				scoped_lock<mutex> lock(sMutex);
				cout << "childThread2 is joinable" << endl;
			}
			childThread2.join();
		}

		Multiply(10);

		cout << sNumber << endl;
		sNumber = 10;
	}
}
