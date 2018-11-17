#pragma once

#include <map>
#include <iostream>
#include <string>
#include <memory>
#include "MyVector.h"

using namespace std;

namespace samples
{
	class SimpleCache
	{
	public:
		SimpleCache() = default;
		~SimpleCache() = default;

		void Add(string key, weak_ptr<MyVector> ptr);
		shared_ptr<MyVector> Get(string key);

	private:
		map<string, weak_ptr<MyVector>> mMap;
	};
}
