#pragma once
#include <string>
#include <iostream>

namespace samples
{
	class Human
	{
	public:
		Human() = delete;
		Human(const char* name);

		virtual ~Human() = default;

		virtual void SayMyName() const;

	protected:
		std::string mName;
	};
}
