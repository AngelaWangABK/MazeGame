#pragma once
#include "PlacableActor.h"
class Potion : public PlacableActor
{
public:
	Potion(int x, int y, int strength);

	int GetStrength() const { return p_strength; }

	virtual ActorType GetType() override { return ActorType::Potion; }
	virtual void Draw() override;
private:
	int p_strength;
};
