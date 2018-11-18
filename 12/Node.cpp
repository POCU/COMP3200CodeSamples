#include "Node.h"

namespace samples
{
	Node::Node(int data)
		: mData(data)
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
}
