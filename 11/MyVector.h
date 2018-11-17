#pragma once

namespace samples
{
	class MyVector
	{
	public:
		MyVector() = delete;
		MyVector(int x, int y);
		virtual ~MyVector() = default;

		int GetX() const;
		int GetY() const;

	private:
		int mX;
		int mY;
	};

}
