#pragma once

#include "EColor.h"

namespace samples
{
	class Ball
	{
	public:
		Ball(eColor color);
		Ball() = delete;
		~Ball() = default;

		eColor GetColor() const;
		void SayColor() const;

	private:
		eColor mColor;
	};
}

