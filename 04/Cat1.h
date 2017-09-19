#pragma once

#include "IWalkable.h"

namespace samples
{
	class Cat1 : public IWalkable
	{
	public:
		void Walk() const;
	};
}