#include <iostream>
#include "Cat2.h"
#include "StaticMemberVariableExample.h"

using namespace std;

namespace samples
{
	void StaticMemberVariableExample()
	{
		Cat2* myCat1 = new Cat2(2, "Lulu");
		Cat2* myCat2 = new Cat2(5, "Poppy");
		Cat2* myCat3 = new Cat2(3, "Teemo");
		Cat2* myCat4 = new Cat2(7, "Amumu");

		cout << "myCat1's type : " << myCat1->GetType() <<endl;
		cout << "myCat2's type : " << myCat2->GetType() << endl;
		cout << "myCat3's type : " << myCat3->GetType() << endl;
		cout << "myCat4's type : " << myCat4->GetType() << endl;

		delete myCat1;
		delete myCat2;
		delete myCat3;
		delete myCat4;
	}
}