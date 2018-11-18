#pragma once

namespace samples
{
	class MyVector2D final
	{
	public:
		MyVector2D() = delete;
		MyVector2D(int x, int y);
		~MyVector2D() = default;

		int GetX() const;
		int GetY() const;

	private:
		int mX;
		int mY;
	};
}