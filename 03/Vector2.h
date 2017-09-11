#pragma once

#include <iostream>

namespace samples
{
	class Vector2
	{
	public:
		Vector2();
		Vector2(int x, int y);

		int GetX() const;
		void SetX(int x);

		int GetY() const;
		void SetY(int y);

		bool operator==(const Vector2& rhs) const;

		Vector2 operator*(const Vector2& rhs) const;
		Vector2 operator*(int multiplier) const;
		friend Vector2 operator*(int multiplier, const Vector2& v);

		Vector2& operator*=(const Vector2& rhs);
		Vector2& operator*=(int multiplier);

		friend std::ostream& operator<<(std::ostream& out, const Vector2& vector);

	private:
		int mX;
		int mY;
	};
}



