#include "SimpleCache.h"

namespace samples
{
	void SimpleCache::Add(string key, weak_ptr<MyVector2D> ptr)
	{
		auto it = mMap.find(key);

		if (it == mMap.end())
		{
			mMap.insert(pair<string, weak_ptr<MyVector2D>>(key, ptr));
			return;
		}
		
		mMap[key] = ptr;
	}

	shared_ptr<MyVector2D> SimpleCache::Get(string key)
	{
		auto it = mMap.find(key);

		if (it == mMap.end())
		{
			return shared_ptr<MyVector2D>();
		}

		if (it->second.expired())
		{
			mMap.erase(it);
			return shared_ptr<MyVector2D>();
		}

		return it->second.lock();
	}
}
