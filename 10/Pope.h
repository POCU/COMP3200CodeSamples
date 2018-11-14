#pragma once

#include "Human.h"

namespace samples
{
	class Pope final : public Human
	{
	public:
		Pope();
		Pope(const Pope& otherPope) = delete;

		virtual ~Pope() = default;

		virtual void SayMyName() const override;

		// Compile error
		// void Scream() const override;
	};
}