#pragma once

#include <string>
#include <memory>

using namespace std;

namespace samples
{
	class Node final
	{
	public:
		Node() = delete;
		Node(const char* key, int data);
		~Node() = default;

		void SetNext(shared_ptr<Node> const next);
		shared_ptr<Node> GetNext() const;
		int GetData() const;
		const string& GetKey() const;

	private:
		string mKey;
		int mData;
		shared_ptr<Node> mNext;
	};
}
