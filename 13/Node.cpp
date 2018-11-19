#include "Node.h"

namespace samples
{
	Node::Node(const char* key, int data)
		: mKey(string(key))
		, mData(data)
	{
	}

	void Node::SetNext(shared_ptr<Node> const next)
	{
		mNext = next;
	}

	shared_ptr<Node> Node::GetNext() const
	{
		return mNext;
	}

	int Node::GetData() const
	{
		return mData;
	}

	const string& Node::GetKey() const
	{
		return mKey;
	}
}
