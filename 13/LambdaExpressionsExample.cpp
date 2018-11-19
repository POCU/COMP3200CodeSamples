#include <string>
#include <iostream>
#include "LambdaExpressionsExample.h"

using namespace std;

namespace samples
{
	void LambdaExpressionsExample()
	{
		int i = 0;
		float f = 1.0f;
		char c = 'b';

		auto noCapturing = []()
		{
			cout << "No capture:" << endl;
			
			// Compile Error
			// cout << "i: " << i << endl;
			// cout << "f: " << f << endl;
			// cout << "c: " << c << endl;
		};

		auto capturedByValue = [=]()
		{
			cout << "Capture by value:" << endl;

			cout << "i: " << i << endl;
			cout << "f: " << f << endl;
			cout << "c: " << c << endl;

			// Compile error
			// i++;
			// f = 2.0f;
			// c = 'a';
		};

		auto capturedByRef = [&]()
		{
			cout << "Capture by reference:" << endl;

			cout << "i: " << i << endl;
			cout << "f: " << f << endl;
			cout << "c: " << c << endl;

			i++;
			f++;
			c++;

			cout << "i: " << i << endl;
			cout << "f: " << f << endl;
			cout << "c: " << c << endl;

			i--;
			f--;
			c--;
		};

		auto capturedByVariableNames = [i, f]()
		{
			cout << "Capture by variable names value:" << endl;

			cout << "i: " << i << endl;
			cout << "f: " << f << endl;

			// Compile error
			// cout << "c: " << c << endl;
			// i++;
			// f++;
		};

		auto capturedByVariableNamesRef = [&i, &f]()
		{
			cout << "Capture by varibale names reference:" << endl;

			cout << "i: " << i << endl;
			cout << "f: " << f << endl;
			
			// Compile error
			// cout << "c: " << c << endl;

			i++;
			f++;

			cout << "i: " << i << endl;
			cout << "f: " << f << endl;

			i--;
			f--;
		};

		auto capturedByMix = [=, &f, &c]()
		{
			cout << "Capture by value by default, then by variable names reference" << endl;

			cout << "i: " << i << endl;
			cout << "f: " << f << endl;
			cout << "c: " << c << endl;

			// Compile error
			// i++;

			f++;
			c++;

			cout << "i: " << i << endl;
			cout << "f: " << f << endl;
			cout << "c: " << c << endl;

			f--;
			c--;
		};

		auto capturedByValueMutable = [=]() mutable
		{
			cout << "Capture by value with mutable specifier" << endl;

			i++;
			f++;
			c++;
		};

		capturedByValue();
		capturedByRef();
		capturedByVariableNames();
		capturedByVariableNamesRef();
		capturedByMix();
		capturedByValueMutable();

		cout << "i: " << i << endl;
		cout << "f: " << f << endl;
		cout << "c: " << c << endl;
	}
}