#include <iostream>
#include "SimpleHashMapExample.h"
#include "SimpleHashMap.h"

using namespace std;

namespace samples
{
	void SimpleHashMapExample()
	{
		SimpleHashMap map;

		map.Add("test1", 1);
		map.Add("test2", 2);
		map.Add("test3", 3);
		map.Add("test4", 4);
		map.Add("test5", 5);

		map.Print();

		map.Add("test1", 10);
		map.Add("test5", 100);

		cout << map.Get("test2") << endl;
		cout << map.Get("nokey") << endl;
	}
}