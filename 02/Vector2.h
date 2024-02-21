#pragma once

class Vector2
{
public:
	Vector2();
	Vector2(int x, int y);
	
	int GetX() const;
	int GetY() const;
	void SetX(int x);
	void SetY(int Y);

	void Add(const Vector2& vector);
	
private:
	int mX;
	int mY;
};