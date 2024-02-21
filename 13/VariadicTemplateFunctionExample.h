#pragma once

#include <iostream>

using namespace std;

namespace samples
{
	void VariadicTemplateFunctionExample();

	template<typename T, typename... TArgs>
	T* Create(TArgs... args)
	{
		cout << "Creating instance" << endl;
		T* object = new T(args...);
		return object;
	}
}
