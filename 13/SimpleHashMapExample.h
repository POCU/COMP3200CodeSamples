#pragma once

namespace samples
{
	void SimpleHashMapExample();

	//constexpr unsigned long HashFunctionWithCompileError(const char* s);
	constexpr unsigned long HashFunction(const char* s);
}
