#pragma once

#include <memory>

using namespace std;

namespace samples
{
	class Node final
	{
	public:
		Node() = delete;
		Node(int data);
		~Node() = default;

		void SetNext(shared_ptr<Node> const next);
		shared_ptr<Node> GetNext() const;
		int GetData() const;

	private:
		int mData;
		shared_ptr<Node> mNext;
	};
}
