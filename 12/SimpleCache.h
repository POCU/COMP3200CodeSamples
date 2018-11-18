#pragma once

#include <map>
#include <iostream>
#include <string>
#include <memory>
#include "MyVector2D.h"

using namespace std;

namespace samples
{
	class SimpleCache
	{
	public:
		SimpleCache() = default;
		~SimpleCache() = default;

		void Add(string key, weak_ptr<MyVector2D> ptr);
		shared_ptr<MyVector2D> Get(string key);

	private:
		map<string, weak_ptr<MyVector2D>> mMap;
	};
}
