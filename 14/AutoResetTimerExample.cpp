#include <mutex>
#include <iostream>
#include "AutoResetTimerExample.h"

using namespace std;

namespace samples
{
	static mutex sMutex;
	static condition_variable mEvent;
	static int seconds;
	const int MAX_SECONDS = 10;

	void Timer()
	{
		while (true)
		{
			{
				scoped_lock<mutex> lock(sMutex);
				cout << seconds << endl;
			}

			chrono::seconds delay = chrono::seconds(1);
			auto end = chrono::high_resolution_clock::now() + delay;
			while (chrono::high_resolution_clock::now() < end)
			{
				this_thread::yield();
			}

			{
				unique_lock<mutex> lock(sMutex);
				seconds++;

				mEvent.notify_one();
			}
		}
	}

	void Resetter()
	{
		while (true)
		{
			{
				unique_lock<mutex> lock(sMutex);
				mEvent.wait(lock, [] { return seconds >= MAX_SECONDS; });

				seconds = 0;
			}

			{
				scoped_lock<mutex> lock(sMutex);
				cout << "Reset: " << seconds << endl;
			}
		}
	}

	void AutoResetTimerExample()
	{
		thread timer(Timer);
		thread resetter(Resetter);

		resetter.join();
		timer.join();
	}
}
