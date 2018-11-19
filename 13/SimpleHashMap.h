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

		void Add(const char* key, int value);
		int Get(const char* key) const;
		void Print() const;

	private:
		//constexpr int hashFunctionWithCompileError(const char* s);
		static constexpr int hashFunction(const char* s, size_t length);

		static constexpr int MAX_SIZE = 10;
		shared_ptr<Node> mArray[MAX_SIZE];
	};
}


