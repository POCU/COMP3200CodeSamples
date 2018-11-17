#pragma once

namespace samples
{
	class MyVector final
	{
	public:
		MyVector() = delete;
		MyVector(int x, int y);
		~MyVector() = default;

		int X;
		int Y;
	};
}