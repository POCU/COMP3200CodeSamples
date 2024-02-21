#pragma once

namespace samples
{
	class Foo
	{
	public:
		Foo() = delete;
		Foo(float f1);
		Foo(float f1, float f2);
		~Foo() = default;
	};
}
