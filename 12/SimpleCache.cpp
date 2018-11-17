#include "SimpleCache.h"

namespace samples
{
	void SimpleCache::Add(string key, weak_ptr<MyVector> ptr)
	{
		auto it = mMap.find(key);

		if (it == mMap.end())
		{
			mMap.insert(pair<string, weak_ptr<MyVector>>(key, ptr));
			return;
		}
		
		mMap[key] = ptr;
	}

	shared_ptr<MyVector> SimpleCache::Get(string key)
	{
		auto it = mMap.find(key);

		if (it == mMap.end())
		{
			return shared_ptr<MyVector>();
		}

		if (it->second.expired())
		{
			mMap.erase(it);
			return shared_ptr<MyVector>();
		}

		return it->second.lock();
	}
}
