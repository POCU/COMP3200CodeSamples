#pragma once
#include <string>

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
