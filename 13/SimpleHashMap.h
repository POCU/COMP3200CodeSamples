#pragma once

#include <memory>
#include "Node.h"
#include "SimpleData.h"

using namespace std;

namespace samples
{
	class SimpleHashMap
	{
	public:
		SimpleHashMap() = default;
		~SimpleHashMap() = default;

		void Add(const char* key, unsigned long hash, int value);
		int Get(const char* key, unsigned long hash) const;
		void Print() const;

	private:
		static constexpr int MAX_SIZE = 10;
		shared_ptr<Node> mArray[MAX_SIZE];
	};
}
