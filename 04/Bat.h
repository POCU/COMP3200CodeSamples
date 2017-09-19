#pragma once

#include "IFlyable.h"
#include "IWalkable.h"

namespace samples
{
	class Bat : public IFlyable, public IWalkable
	{
	public:
		void Fly() const;
		void Walk() const;
	};
}
