#include <memory>
#include <iostream>
#include <cassert>
#include "CacheExample.h"
#include "SimpleCache.h"
#include "MyVector.h"

using namespace std;

namespace samples
{
	void CacheExample()
	{
		shared_ptr<MyVector> vector1 = make_shared<MyVector>(0, 1);
		shared_ptr<MyVector> vector2 = make_shared<MyVector>(2, 5);
		shared_ptr<MyVector> vector3 = make_shared<MyVector>(8, 4);
		
		SimpleCache cache;

		cache.Add("Candy", vector1);
		cache.Add("IceCream", vector2);
		cache.Add("Chocolate", vector3);

		shared_ptr<MyVector> cachedVector2 = cache.Get("IceCream");

		cout << "Usage of cachedVector2: " << cachedVector2.use_count() << endl;
		cout << "IceCream values: X: " << cachedVector2->X << ", Y: " << cachedVector2->Y << endl;

		cache.Add("IceCream", vector3);

		cachedVector2 = cache.Get("IceCream");

		cout << "IceCream values: X: " << cachedVector2->X << ", Y: " << cachedVector2->Y << endl;

		vector1 = nullptr;

		shared_ptr<MyVector> cachedVector1 = cache.Get("Candy");

		assert(cachedVector1 == nullptr);
	}
}
