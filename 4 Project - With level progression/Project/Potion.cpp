#include <iostream>
#include "Potion.h"

Potion::Potion(int x, int y, int hp)
	: PlacableActor(x, y)
	, p_strength(hp)
{

}

void Potion::Draw()
{
	std::cout << "^";
}
