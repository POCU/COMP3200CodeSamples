#pragma once

namespace samples
{
	class String
	{
	public:
		String(const char* str);
		String(const String& str);
		~String();

		void Print();

	private:
		char* mString;
		size_t mSize;
	};
}
