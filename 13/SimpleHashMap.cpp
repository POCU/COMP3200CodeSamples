#include <string>
#include <algorithm>
#include <iostream>
#include "SimpleData.h"
#include "SimpleHashMap.h"

namespace samples
{
	void SimpleHashMap::Add(const char* key, int value)
	{
		shared_ptr<Node> newNode = make_shared<Node>(key, value);

		int hash = SimpleHashMap::hashFunction(key, strlen(key));
		int index = hash % MAX_SIZE;

		if (mArray[index] == nullptr)
		{
			mArray[index] = newNode;
			return;
		}

		shared_ptr<Node> current = mArray[index];
		if (current->GetKey() == key)
		{
			newNode->SetNext(current->GetNext());
			mArray[index] = newNode;
			return;
		}

		while (current->GetNext() != nullptr)
		{
			if (current->GetNext()->GetKey() == key)
			{
				newNode->SetNext(current->GetNext()->GetNext());
				current->SetNext(newNode);
				return;
			}

			current = current->GetNext();
		}

		current->SetNext(newNode);
	}

	int SimpleHashMap::Get(const char* key) const
	{
		int hash = SimpleHashMap::hashFunction(key, strlen(key));
		int index = hash % MAX_SIZE;

		if (mArray[index] == nullptr)
		{
			return -1;
		}

		shared_ptr<Node> current = mArray[index];

		while (current != nullptr)
		{
			if (current->GetKey() == key)
			{
				return current->GetData();
			}

			current = current->GetNext();
		}

		return -1;
	}

	void SimpleHashMap::Print() const
	{
		for (int i = 0; i < MAX_SIZE; i++)
		{
			if (mArray[i] != nullptr)
			{
				shared_ptr<Node> current = mArray[i];

				while (current != nullptr)
				{
					cout << "Key: " << current->GetKey() << ", Value: " << current->GetData() << endl;
					current = current->GetNext();
				}
			}
		}
	}

	/*constexpr int SimpleHashMap::hashFunctionWithCompileError(const char* s)
	{
		int length = strlen(s);

		int sum = 0;

		for (int i = 0; i < length; i++)
		{
			sum += s[i];
		}

		return sum;
	}*/

	constexpr int SimpleHashMap::hashFunction(const char* s, size_t length)
	{
		int sum = 0;

		for (int i = 0; i < length; i++)
		{
			sum += s[i];
		}

		return sum;
	}
}
