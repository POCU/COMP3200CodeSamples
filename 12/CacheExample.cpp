#include <memory>
#include <iostream>
#include <cassert>
#include "CacheExample.h"
#include "SimpleCache.h"
#include "MyVector2D.h"

using namespace std;

namespace samples
{
	void CacheExample()
	{
		shared_ptr<MyVector2D> vector1 = make_shared<MyVector2D>(0, 1);
		shared_ptr<MyVector2D> vector2 = make_shared<MyVector2D>(2, 5);
		shared_ptr<MyVector2D> vector3 = make_shared<MyVector2D>(8, 4);
		
		SimpleCache cache;

		cache.Add("Candy", vector1);
		cache.Add("IceCream", vector2);
		cache.Add("Chocolate", vector3);

		shared_ptr<MyVector2D> cachedVector2 = cache.Get("IceCream");

		cout << "Usage of cachedVector2: " << cachedVector2.use_count() << endl;
		cout << "IceCream values: X: " << cachedVector2->GetX() << ", Y: " << cachedVector2->GetY() << endl;

		cache.Add("IceCream", vector3);

		cachedVector2 = cache.Get("IceCream");

		cout << "IceCream values: X: " << cachedVector2->GetX() << ", Y: " << cachedVector2->GetY() << endl;

		vector1 = nullptr;

		shared_ptr<MyVector2D> cachedVector1 = cache.Get("Candy");

		assert(cachedVector1 == nullptr);
	}
}
