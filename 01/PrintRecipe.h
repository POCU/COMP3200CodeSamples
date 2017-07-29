#pragma once

namespace samples
{
	// TODO: Print the recipe below by using manipulator (fill(), setw(), precision())
	// --------------------------
	//   Name             Price
	// --------------------------
	//   Iced Coffee     $01.25
	//   Latte           $04.75
	//   Breakfast Set   $15.10
	// --------------------------
	// 01234567890123456789012345 <- This helps you to check lengths
	// **==============**======** <- * means empty space
	// **name(length:14)**price(length:6)**
	// add '0' if price is less then $10 (see Latte)
	void PrintRecipe();
}