#pragma once

#include <vector>

#include "Score.h"

namespace samples
{
	void PointerVectorExample();
	
	void PrintVector(const std::vector<Score*>& scores);
}