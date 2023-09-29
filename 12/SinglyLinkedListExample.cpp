#include <memory>
#include <iostream>
#include "SinglyLinkedListExample.h"
#include "Node.h"

using namespace std;

namespace samples
{
	void SinglyLinkedListExample()
	{
		shared_ptr<Node> root = make_shared<Node>(1);
		root->SetNext(make_shared<Node>(2));
		root->GetNext()->SetNext(make_shared<Node>(3));
		root->GetNext()->GetNext()->SetNext(make_shared<Node>(4));
		
		shared_ptr<Node> lastNode = make_shared<Node>(5);

		root->GetNext()->GetNext()->GetNext()->SetNext(lastNode);

		cout << "---Print linked list---" << endl;
		shared_ptr<Node> node = root;
		while (node != nullptr)
		{
			cout << node->GetData() << endl;
			node = node->GetNext();
		}

		cout << "Use count for lastNode: " << lastNode.use_count() << endl;
	}
}
